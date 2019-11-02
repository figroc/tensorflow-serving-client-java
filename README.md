# tensorflow-serving-client

[![Build Status](https://travis-ci.com/figroc/tensorflow-serving-client.svg?branch=master)](https://travis-ci.com/figroc/tensorflow-serving-client)

A prebuilt tensorflow serving client from the tensorflow serving proto files.
Currently supported build:
  * C++
  * Java
  * Python
  * Node
  * Go
  * Mono

Check tensorflow serving project for details: https://tensorflow.github.io/serving/

### update proto files
```
./update.sh
```
* the desired version can be specified in the `VERSION` file

### prerequisite

Grpc tools are needed for building variant packages.
Install `protobuf-compiler-grpc` on Ubuntu and `grpc` on macOS.

### build jar file
```
gradle build
```
* `tensorflow-serving-client` is located in `build/libs`

The library has been published in maven central under the name `io.opil:tensorflow-serving-client`

### build wheel file
```
gradle wheel
```
* `tensorflow_serving_client_grpc` is located in `build/dist`

The library has been published in pypi.org under the name `tensorflow-serving-client-grpc`.

### build native library
```
gradle cmake
```
* `libtensorflow-serving-client.a` is located in `build/dist/lib/static`
* **prerequisite:** `libprotobuf-dev` on Ubuntu and `protobuf` on macOS

### build node tarball
```
gradle node
```
* `tensorflow-serving-client` tarball is located in `build/node`

The library has been published in npmjs.com under the name `tensorflow-serving-client`

### build go module
```
gradle golang
```
* `tensorflow-serving-client` is located in `build/generated/source/proto/main/go`
* **prerequisite:** `github.com/golang/protobuf/protoc-gen-go` for build

### build mono library
```
gradle mono
```
* `tensorflow-serving-client` is located in `build/msbuild`
