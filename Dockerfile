FROM gradle
LABEL maintainer="Figroc Chen<figroc@gmail.com>"

RUN apt-get update && apt-get install -y \
      apt-transport-https apt-utils gettext git gnupg zip unzip \
      autoconf automake g++ gcc libtool pkg-config \
      build-essential libffi-dev libssl-dev \
      python3-dev python3-distutils && \
    apt-get clean && rm -rf /var/lib/apt/lists/*
RUN git clone -b release --depth 1 --recurse-submodules --shallow-submodules --progress \
      https://github.com/Kitware/CMake.git && \
    cd CMake && \
      ./bootstrap && make && make install && \
    cd .. && rm -rf CMake
RUN curl -sSL https://bootstrap.pypa.io/get-pip.py | python3 && \
    pip --no-cache-dir install -U twine
    #apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-keys F23C5A6CF475977595C89F51BA6932366A755776 && \
    #echo 'deb http://ppa.launchpad.net/deadsnakes/ppa/ubuntu bionic main' >/etc/apt/sources.list.d/deadsnakes-ppa.list && \
    #apt-get update && apt-get install -y \
    #  python3.8-dev && \
    #apt-get clean && rm -rf /var/lib/apt/lists/*
RUN curl -o mspkg.deb -sSL https://packages.microsoft.com/config/ubuntu/18.04/packages-microsoft-prod.deb && \
    dpkg -i mspkg.deb && rm -f mspkg.deb && \
    apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-keys 3FA7E0328081BFF6A14DA29AA6A19B38D3D831EF && \
    echo 'deb https://download.mono-project.com/repo/ubuntu stable-bionic main' >/etc/apt/sources.list.d/mono-official-stable.list && \
    apt-get update && apt-get install -y \
      dotnet-sdk-3.1 mono-devel msbuild nuget && \
    apt-get clean && rm -rf /var/lib/apt/lists/*
RUN curl -sSL https://deb.nodesource.com/gpgkey/nodesource.gpg.key | apt-key add - && \
    echo 'deb https://deb.nodesource.com/node_12.x bionic main' >/etc/apt/sources.list.d/nodesource.list && \
    apt-get update && apt-get install -y \
      nodejs && \
    apt-get clean && rm -rf /var/lib/apt/lists/*
RUN apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-keys 52B59B1571A79DBC054901C0F6BC817356A3D45E && \
    echo 'deb http://ppa.launchpad.net/longsleep/golang-backports/ubuntu bionic main' >/etc/apt/sources.list.d/longsleep-golang-backports.list && \
    apt-get update && apt-get install -y \
      golang-go && \
    apt-get clean && rm -rf /var/lib/apt/lists/*
RUN curl -sSL https://sh.rustup.rs | \
    RUSTUP_HOME=/opt/rust/rustup CARGO_HOME=/opt/rust/cargo \
    sh -s -- --default-toolchain stable --profile default --no-modify-path -y
ENV GRADLE_OPTS="-XX:MaxMetaspaceSize=256m -XX:+HeapDumpOnOutOfMemoryError -Xmx512m" \
    GO111MODULE=on RUSTUP_HOME=/opt/rust/rustup PATH=${PATH}:/opt/rust/cargo/bin
RUN git clone -b v1.35.x --depth 1 --recurse-submodules --shallow-submodules --progress \
      https://github.com/grpc/grpc.git && \
    cd grpc && mkdir -p cmake/build && cd cmake/build && \
      cmake -DgRPC_INSTALL=ON \
            -DgRPC_BUILD_TESTS=OFF \
            -DBUILD_SHARED_LIBS=ON \
            ../.. && \
      make && make install && ldconfig && \
    cd ../../.. && rm -rf grpc

USER gradle
ENV PATH=${PATH}:/home/gradle/go/bin:/home/gradle/.cargo/bin
WORKDIR /work
