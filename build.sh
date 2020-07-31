#!/bin/bash

set -e
cd $(dirname ${BASH_SOURCE[0]})

builder="figroc/tfsclient:build"
if [[ -z "$(docker images -q ${builder})" ]]; then
  docker build -t ${builder} .
fi

if [[ "$(uname)" != "Darwin" && "$(id -u)" != "1000" ]]; then
  (
    echo "WARNING: Current user $(id -F)($(id -u):$(id -g))" \
         "does not match the user gradle(1000:1000) in the container."
    echo "The building might fail for unable to access dirs:" \
         ".gralde, build and obj."
  ) 1>&2
fi

docker run --rm -it -v $(pwd):/work \
  ${builder} gradle --no-daemon $@
