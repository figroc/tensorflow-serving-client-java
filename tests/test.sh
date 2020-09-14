#!/bin/bash

set -e
cd $(dirname ${BASH_SOURCE[0]})

docker-compose up -d

function cpp {
  cd cpp
}

function java {
  cd java
}

function python {
  cd python
}

function node {
  cd node
}

function golang {
  cd go
  go run main.go
}

function mono {
  cd csharp
}

function rust {
  cd rust
}

(eval "${1}")

docker-compose down -v
