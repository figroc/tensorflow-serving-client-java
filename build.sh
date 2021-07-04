#!/bin/bash

set -e
cd $(dirname ${BASH_SOURCE[0]})

builder="figroc/tfsclient:build"

if [[ -z "$(docker images -q ${builder})" ]]; then
  docker build -t ${builder} --build-arg HTTP_PROXY=${ALL_PROXY} .
fi

if [[ "$(id -u)" != "1000" ]]; then
  (
    echo "WARNING: Current user $(whoami)($(id -u):$(id -g))" \
         "does not match the user gradle(1000:1000) in the container."
    echo "The building might fail for unable to access dirs:" \
         ".gralde, build and obj."
  ) 1>&2
  for d in .gradle build obj; do
    mkdir -p ${d}
    chmod -R go+u ${d}
  done
  chmod go+u .
fi

workspace=/work/tensorflow-serving-client

docker run --rm -w=${workspace} \
  -e ALL_PROXY -e GOPROXY -e HTTP_PROXY=${ALL_PROXY} \
  -v $(pwd):${workspace} ${builder} gradle --no-daemon "$@"
