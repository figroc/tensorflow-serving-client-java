#!/bin/bash

set -e
cd $(dirname ${BASH_SOURCE[0]})

docker run -t --rm -p 8500:8500 \
  -v ./tests/data/saved_model_half_plus_two_cpu:/models/half_plus_two \
  -e MODEL_NAME=half_plus_two \
  tensorflow/serving &

function cpp {
  cd cpp
}

function java {
  cd java
}

function wheel {
  cd python
}

function node {
  cd node
}

function golang {
  cd go
}

function mono {
  cd csharp
}

function rust {
  cd rust
}

eval "${1}"
