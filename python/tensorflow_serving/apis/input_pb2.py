# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: tensorflow_serving/apis/input.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from tensorflow.core.example import example_pb2 as tensorflow_dot_core_dot_example_dot_example__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='tensorflow_serving/apis/input.proto',
  package='tensorflow.serving',
  syntax='proto3',
  serialized_options=b'\370\001\001',
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n#tensorflow_serving/apis/input.proto\x12\x12tensorflow.serving\x1a%tensorflow/core/example/example.proto\"4\n\x0b\x45xampleList\x12%\n\x08\x65xamples\x18\x01 \x03(\x0b\x32\x13.tensorflow.Example\"e\n\x16\x45xampleListWithContext\x12%\n\x08\x65xamples\x18\x01 \x03(\x0b\x32\x13.tensorflow.Example\x12$\n\x07\x63ontext\x18\x02 \x01(\x0b\x32\x13.tensorflow.Example\"\xa1\x01\n\x05Input\x12;\n\x0c\x65xample_list\x18\x01 \x01(\x0b\x32\x1f.tensorflow.serving.ExampleListB\x02(\x01H\x00\x12S\n\x19\x65xample_list_with_context\x18\x02 \x01(\x0b\x32*.tensorflow.serving.ExampleListWithContextB\x02(\x01H\x00\x42\x06\n\x04kindB\x03\xf8\x01\x01\x62\x06proto3'
  ,
  dependencies=[tensorflow_dot_core_dot_example_dot_example__pb2.DESCRIPTOR,])




_EXAMPLELIST = _descriptor.Descriptor(
  name='ExampleList',
  full_name='tensorflow.serving.ExampleList',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='examples', full_name='tensorflow.serving.ExampleList.examples', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=98,
  serialized_end=150,
)


_EXAMPLELISTWITHCONTEXT = _descriptor.Descriptor(
  name='ExampleListWithContext',
  full_name='tensorflow.serving.ExampleListWithContext',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='examples', full_name='tensorflow.serving.ExampleListWithContext.examples', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='context', full_name='tensorflow.serving.ExampleListWithContext.context', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=152,
  serialized_end=253,
)


_INPUT = _descriptor.Descriptor(
  name='Input',
  full_name='tensorflow.serving.Input',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='example_list', full_name='tensorflow.serving.Input.example_list', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=b'(\001', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='example_list_with_context', full_name='tensorflow.serving.Input.example_list_with_context', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=b'(\001', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
    _descriptor.OneofDescriptor(
      name='kind', full_name='tensorflow.serving.Input.kind',
      index=0, containing_type=None,
      create_key=_descriptor._internal_create_key,
    fields=[]),
  ],
  serialized_start=256,
  serialized_end=417,
)

_EXAMPLELIST.fields_by_name['examples'].message_type = tensorflow_dot_core_dot_example_dot_example__pb2._EXAMPLE
_EXAMPLELISTWITHCONTEXT.fields_by_name['examples'].message_type = tensorflow_dot_core_dot_example_dot_example__pb2._EXAMPLE
_EXAMPLELISTWITHCONTEXT.fields_by_name['context'].message_type = tensorflow_dot_core_dot_example_dot_example__pb2._EXAMPLE
_INPUT.fields_by_name['example_list'].message_type = _EXAMPLELIST
_INPUT.fields_by_name['example_list_with_context'].message_type = _EXAMPLELISTWITHCONTEXT
_INPUT.oneofs_by_name['kind'].fields.append(
  _INPUT.fields_by_name['example_list'])
_INPUT.fields_by_name['example_list'].containing_oneof = _INPUT.oneofs_by_name['kind']
_INPUT.oneofs_by_name['kind'].fields.append(
  _INPUT.fields_by_name['example_list_with_context'])
_INPUT.fields_by_name['example_list_with_context'].containing_oneof = _INPUT.oneofs_by_name['kind']
DESCRIPTOR.message_types_by_name['ExampleList'] = _EXAMPLELIST
DESCRIPTOR.message_types_by_name['ExampleListWithContext'] = _EXAMPLELISTWITHCONTEXT
DESCRIPTOR.message_types_by_name['Input'] = _INPUT
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

ExampleList = _reflection.GeneratedProtocolMessageType('ExampleList', (_message.Message,), {
  'DESCRIPTOR' : _EXAMPLELIST,
  '__module__' : 'tensorflow_serving.apis.input_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.serving.ExampleList)
  })
_sym_db.RegisterMessage(ExampleList)

ExampleListWithContext = _reflection.GeneratedProtocolMessageType('ExampleListWithContext', (_message.Message,), {
  'DESCRIPTOR' : _EXAMPLELISTWITHCONTEXT,
  '__module__' : 'tensorflow_serving.apis.input_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.serving.ExampleListWithContext)
  })
_sym_db.RegisterMessage(ExampleListWithContext)

Input = _reflection.GeneratedProtocolMessageType('Input', (_message.Message,), {
  'DESCRIPTOR' : _INPUT,
  '__module__' : 'tensorflow_serving.apis.input_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.serving.Input)
  })
_sym_db.RegisterMessage(Input)


DESCRIPTOR._options = None
_INPUT.fields_by_name['example_list']._options = None
_INPUT.fields_by_name['example_list_with_context']._options = None
# @@protoc_insertion_point(module_scope)
