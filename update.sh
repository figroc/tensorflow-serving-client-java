#!/bin/bash

set -e
cd $(dirname ${BASH_SOURCE[0]})

ver="r$(cat VERSION | cut -d'.' -f1,2)"
proj=tensorflow-serving-client
repo=build/proto
goto=proto
apis=tensorflow_serving/apis

norm=('s@(tensorflow/core/)lib/core(/error_codes.proto)@\1protobuf\2@'
      's@(option go_package = ".*)/[a-z_]*_go_proto(".*)@\1\2@')
norm=$(IFS=';'; echo "${norm[*]}")

rm -rf ${repo}
function fetchRepo {( set -e
  mkdir -p ${repo}/tmp
  git -C ${repo}/tmp \
      clone --depth 1 -b ${ver} \
      https://github.com/tensorflow/${1}.git
  mv ${repo}/tmp/${1}/${2} ${repo}/
  rm -rf ${repo}/tmp
)}
fetchRepo tensorflow tensorflow
fetchRepo serving    tensorflow_serving

rm -rf ${goto}
function importProto {( set -e
  if [[ ! -f ${goto}/${1} ]]; then
    echo "${1}"
    mkdir -p ${goto}/${1%/*}
    sed -E "${norm}" ${repo}/${1} >${goto}/${1}
    local proto=( $(grep '^import ' ${goto}/${1} \
                  | grep -Eo '((\w|-)+(/|\.))+proto') )
    for p in ${proto[@]}; do
      if [[ "${p:0:10}" == "tensorflow" ]]; then
        importProto ${p}
      fi
    done
  fi
)}
for i in ${repo}/${apis}/*_service.proto; do
  importProto ${i#${repo}/}
done
