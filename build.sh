#!/bin/bash

set -e
cd $(dirname ${BASH_SOURCE[0]})

builder="figroc/tfsclient:build"
if [[ -z "$(docker images -q ${builder})" ]]; then
  docker build -t ${builder} .
fi
docker run --rm -it -v $(pwd):/work \
  ${builder} gradle --no-daemon $@
