#!/bin/bash

set -e
cd $(dirname ${BASH_SOURCE[0]})

builder="figroc/tfsclient:build"

if [[ -z "$(docker images -q ${builder})" ]]; then
  docker build -t ${builder} --build-arg HTTP_PROXY .
fi

if [[ "$(id -u)" != "1000" ]]; then
  (
    echo "WARNING: Current user $(id -n)($(id -u):$(id -g))" \
         "does not match the user gradle(1000:1000) in the container."
    echo "The building might fail for unable to access dirs:" \
         ".gralde, build and obj."
  ) 1>&2
  for d in .gradle build obj; do
    mkdir -p ${d}
    chmod -R go+u ${d}
  done
fi

docker run --rm -it \
  -e HTTP_PROXY -e GOPROXY -e ALL_PROXY=${HTTP_PROXY} \
  -v $(pwd):/work ${builder} gradle --no-daemon "$@"
