from os import environ
from setuptools import find_packages, setup


setup(
  name=environ["TFSCLIENT_DIST_NAME"],
  version=environ["TFSCLIENT_DIST_VERSION"],
  packages=find_packages(environ["TFSCLIENT_DIST_SOURCE"]),
  package_dir={"": environ["TFSCLIENT_DIST_SOURCE"]},
  python_requires=">=3.5",
  install_requires=["grpcio", "protobuf"],
  platforms=["any"],
  author=environ["TFSCLIENT_DIST_AUTHOR_NAME"],
  author_email=environ["TFSCLIENT_DIST_AUTHOR_EMAIL"],
  license=environ["TFSCLIENT_DIST_LICENSE"],
  url=environ["TFSCLIENT_DIST_URL"],
  description=environ["TFSCLIENT_DIST_DESCRIPTION"],
  long_description=("This library does not coexist with tensorflow, "
                    "tensorflow-serving and tensorflow-serving-api. "
                    "The official tensorflow-serving-api requires package "
                    "tensorflow. To eliminate this requirement, "
                    "this library is setup to generate only neccessary "
                    "*_pb2.py and *_service_pb2_grpc.py from the apis "
                    "of tensorflow_serving."),
  long_description_content_type="text/plain",
  classifiers=["Development Status :: 5 - Production/Stable",
               "Intended Audience :: Developers",
               "License :: OSI Approved :: Apache Software License",
               "Operating System :: OS Independent",
               "Programming Language :: Python :: 3",
               "Topic :: Scientific/Engineering :: Artificial Intelligence",
               "Topic :: Software Development :: Libraries :: Python Modules"]
)
