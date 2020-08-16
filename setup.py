from os import environ
from setuptools import find_packages, setup


setup(
  name="tensorflow_serving_client_grpc",
  version="2.3.0",
  packages=find_packages("python"),
  package_dir={"": "python"},
  python_requires=">=3.5",
  install_requires=["grpcio", "protobuf"],
  platforms=["any"],
  author="Figroc Chen",
  author_email="figroc@gmail.com",
  license="Apache-2.0",
  url="https://github.com/figroc/tensorflow-serving-client",
  description="A prebuilt tensorflow serving client from the tensorflow serving proto files",
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
