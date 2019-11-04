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
[![Publish Status](https://img.shields.io/maven-central/v/io.opil/tensorflow-serving-client)](https://search.maven.org/search?q=g:io.opil%20AND%20a:tensorflow-serving-client)
```
gradle build
```
* `tensorflow-serving-client` is located in `build/libs`

### build wheel file
[![Publish Status](https://img.shields.io/pypi/v/tensorflow-serving-client-grpc)](https://pypi.org/project/tensorflow-serving-client-grpc)
```
gradle wheel
```
* `tensorflow_serving_client_grpc` is located in `build/dist`
* **prerequisite:** `setuptools`

### build native library
```
gradle cmake
```
* `libtensorflow-serving-client.a` is located in `build/dist/lib/static`
* **prerequisite:** `libprotobuf-dev` on Ubuntu and `protobuf` on macOS

### build node tarball
[![Publish Status](https://img.shields.io/npm/v/tensorflow-serving-client)](https://www.npmjs.com/package/tensorflow-serving-client)
```
gradle node
```
* `tensorflow-serving-client` tarball is located in `build/node`

### build go module
```
gradle golang
```
* `tensorflow-serving-client` is located in `build/generated/source/proto/main/go`
* **prerequisite:** `github.com/golang/protobuf/protoc-gen-go` for build

### build mono library
[![Publish Status](https://img.shields.io/nuget/v/tensorflow-serving-client)](https://www.nuget.org/packages/tensorflow-serving-client/)
```
gradle mono
```
* `tensorflow-serving-client` is located in `build/msbuild` under `Release`
