FROM gradle AS builder
LABEL maintainer="P Chen<figroc@gmail.com>"

RUN apt-get update && apt-get install -y \
      apt-transport-https apt-utils gettext git gnupg zip unzip \
      autoconf automake g++ gcc libtool pkg-config \
      build-essential libffi-dev libssl-dev cmake \
      python3-dev python3-pip twine \
      nodejs npm golang-go && \
    apt-get clean && rm -rf /var/lib/apt/lists/* && \
    pip3 --no-cache-dir install -U pip twine
RUN curl -sSL https://sh.rustup.rs | \
    RUSTUP_HOME=/opt/rust/rustup CARGO_HOME=/opt/rust/cargo \
    sh -s -- --default-toolchain 1.51.0 --profile default --no-modify-path -y
RUN curl -o mspkg.deb -sSL https://packages.microsoft.com/config/ubuntu/20.04/packages-microsoft-prod.deb && \
    dpkg -i mspkg.deb && rm -f mspkg.deb && \
    apt-get update && apt-get install -y \
      dotnet-sdk-3.1 mono-devel nuget && \
    apt-get clean && rm -rf /var/lib/apt/lists/*
ENV GRADLE_OPTS="-XX:MaxMetaspaceSize=256m -XX:+HeapDumpOnOutOfMemoryError -Xmx512m" \
    GO111MODULE=on RUSTUP_HOME=/opt/rust/rustup PATH=${PATH}:/opt/rust/cargo/bin:/home/gradle/go/bin:/home/gradle/.cargo/bin

FROM gradle AS grpc
RUN ALL_PROXY=$HTTP_PROXY \
    git clone -b v1.35.x --depth 1 --progress \
      --recurse-submodules --shallow-submodules \
      https://github.com/grpc/grpc.git

FROM builder
COPY --from=grpc /home/gradle/grpc grpc
RUN cd grpc && mkdir -p cmake/build && cd cmake/build && \
      cmake -DgRPC_INSTALL=ON \
            -DgRPC_BUILD_TESTS=OFF \
            -DBUILD_SHARED_LIBS=ON \
            ../.. && \
      make && make install && ldconfig && \
    cd ../../.. && rm -rf grpc
USER gradle
WORKDIR /work
