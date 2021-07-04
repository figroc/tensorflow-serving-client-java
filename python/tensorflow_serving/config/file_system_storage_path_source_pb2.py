# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: tensorflow_serving/config/file_system_storage_path_source.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='tensorflow_serving/config/file_system_storage_path_source.proto',
  package='tensorflow.serving',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n?tensorflow_serving/config/file_system_storage_path_source.proto\x12\x12tensorflow.serving\"\x84\x07\n!FileSystemStoragePathSourceConfig\x12Z\n\tservables\x18\x05 \x03(\x0b\x32G.tensorflow.serving.FileSystemStoragePathSourceConfig.ServableToMonitor\x12\x19\n\rservable_name\x18\x01 \x01(\tB\x02\x18\x01\x12\x15\n\tbase_path\x18\x02 \x01(\tB\x02\x18\x01\x12%\n\x1d\x66ile_system_poll_wait_seconds\x18\x03 \x01(\x03\x12,\n fail_if_zero_versions_at_startup\x18\x04 \x01(\x08\x42\x02\x18\x01\x12(\n servable_versions_always_present\x18\x06 \x01(\x08\x1a\x9d\x03\n\x15ServableVersionPolicy\x12\x64\n\x06latest\x18\x64 \x01(\x0b\x32R.tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.LatestH\x00\x12^\n\x03\x61ll\x18\x65 \x01(\x0b\x32O.tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.AllH\x00\x12h\n\x08specific\x18\x66 \x01(\x0b\x32T.tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.SpecificH\x00\x1a\x1e\n\x06Latest\x12\x14\n\x0cnum_versions\x18\x01 \x01(\r\x1a\x05\n\x03\x41ll\x1a\x1c\n\x08Specific\x12\x10\n\x08versions\x18\x01 \x03(\x03\x42\x0f\n\rpolicy_choice\x1a\xb1\x01\n\x11ServableToMonitor\x12\x15\n\rservable_name\x18\x01 \x01(\t\x12\x11\n\tbase_path\x18\x02 \x01(\t\x12l\n\x17servable_version_policy\x18\x04 \x01(\x0b\x32K.tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicyJ\x04\x08\x03\x10\x04\x62\x06proto3'
)




_FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY_LATEST = _descriptor.Descriptor(
  name='Latest',
  full_name='tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.Latest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='num_versions', full_name='tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.Latest.num_versions', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
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
  serialized_start=724,
  serialized_end=754,
)

_FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY_ALL = _descriptor.Descriptor(
  name='All',
  full_name='tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.All',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
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
  serialized_start=756,
  serialized_end=761,
)

_FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY_SPECIFIC = _descriptor.Descriptor(
  name='Specific',
  full_name='tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.Specific',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='versions', full_name='tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.Specific.versions', index=0,
      number=1, type=3, cpp_type=2, label=3,
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
  serialized_start=763,
  serialized_end=791,
)

_FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY = _descriptor.Descriptor(
  name='ServableVersionPolicy',
  full_name='tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='latest', full_name='tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.latest', index=0,
      number=100, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='all', full_name='tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.all', index=1,
      number=101, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='specific', full_name='tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.specific', index=2,
      number=102, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[_FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY_LATEST, _FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY_ALL, _FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY_SPECIFIC, ],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
    _descriptor.OneofDescriptor(
      name='policy_choice', full_name='tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.policy_choice',
      index=0, containing_type=None,
      create_key=_descriptor._internal_create_key,
    fields=[]),
  ],
  serialized_start=395,
  serialized_end=808,
)

_FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLETOMONITOR = _descriptor.Descriptor(
  name='ServableToMonitor',
  full_name='tensorflow.serving.FileSystemStoragePathSourceConfig.ServableToMonitor',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='servable_name', full_name='tensorflow.serving.FileSystemStoragePathSourceConfig.ServableToMonitor.servable_name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='base_path', full_name='tensorflow.serving.FileSystemStoragePathSourceConfig.ServableToMonitor.base_path', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='servable_version_policy', full_name='tensorflow.serving.FileSystemStoragePathSourceConfig.ServableToMonitor.servable_version_policy', index=2,
      number=4, type=11, cpp_type=10, label=1,
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
  serialized_start=811,
  serialized_end=988,
)

_FILESYSTEMSTORAGEPATHSOURCECONFIG = _descriptor.Descriptor(
  name='FileSystemStoragePathSourceConfig',
  full_name='tensorflow.serving.FileSystemStoragePathSourceConfig',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='servables', full_name='tensorflow.serving.FileSystemStoragePathSourceConfig.servables', index=0,
      number=5, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='servable_name', full_name='tensorflow.serving.FileSystemStoragePathSourceConfig.servable_name', index=1,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=b'\030\001', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='base_path', full_name='tensorflow.serving.FileSystemStoragePathSourceConfig.base_path', index=2,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=b'\030\001', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='file_system_poll_wait_seconds', full_name='tensorflow.serving.FileSystemStoragePathSourceConfig.file_system_poll_wait_seconds', index=3,
      number=3, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='fail_if_zero_versions_at_startup', full_name='tensorflow.serving.FileSystemStoragePathSourceConfig.fail_if_zero_versions_at_startup', index=4,
      number=4, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=b'\030\001', file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='servable_versions_always_present', full_name='tensorflow.serving.FileSystemStoragePathSourceConfig.servable_versions_always_present', index=5,
      number=6, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[_FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY, _FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLETOMONITOR, ],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=88,
  serialized_end=988,
)

_FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY_LATEST.containing_type = _FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY
_FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY_ALL.containing_type = _FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY
_FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY_SPECIFIC.containing_type = _FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY
_FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY.fields_by_name['latest'].message_type = _FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY_LATEST
_FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY.fields_by_name['all'].message_type = _FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY_ALL
_FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY.fields_by_name['specific'].message_type = _FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY_SPECIFIC
_FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY.containing_type = _FILESYSTEMSTORAGEPATHSOURCECONFIG
_FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY.oneofs_by_name['policy_choice'].fields.append(
  _FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY.fields_by_name['latest'])
_FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY.fields_by_name['latest'].containing_oneof = _FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY.oneofs_by_name['policy_choice']
_FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY.oneofs_by_name['policy_choice'].fields.append(
  _FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY.fields_by_name['all'])
_FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY.fields_by_name['all'].containing_oneof = _FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY.oneofs_by_name['policy_choice']
_FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY.oneofs_by_name['policy_choice'].fields.append(
  _FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY.fields_by_name['specific'])
_FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY.fields_by_name['specific'].containing_oneof = _FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY.oneofs_by_name['policy_choice']
_FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLETOMONITOR.fields_by_name['servable_version_policy'].message_type = _FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY
_FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLETOMONITOR.containing_type = _FILESYSTEMSTORAGEPATHSOURCECONFIG
_FILESYSTEMSTORAGEPATHSOURCECONFIG.fields_by_name['servables'].message_type = _FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLETOMONITOR
DESCRIPTOR.message_types_by_name['FileSystemStoragePathSourceConfig'] = _FILESYSTEMSTORAGEPATHSOURCECONFIG
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

FileSystemStoragePathSourceConfig = _reflection.GeneratedProtocolMessageType('FileSystemStoragePathSourceConfig', (_message.Message,), {

  'ServableVersionPolicy' : _reflection.GeneratedProtocolMessageType('ServableVersionPolicy', (_message.Message,), {

    'Latest' : _reflection.GeneratedProtocolMessageType('Latest', (_message.Message,), {
      'DESCRIPTOR' : _FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY_LATEST,
      '__module__' : 'tensorflow_serving.config.file_system_storage_path_source_pb2'
      # @@protoc_insertion_point(class_scope:tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.Latest)
      })
    ,

    'All' : _reflection.GeneratedProtocolMessageType('All', (_message.Message,), {
      'DESCRIPTOR' : _FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY_ALL,
      '__module__' : 'tensorflow_serving.config.file_system_storage_path_source_pb2'
      # @@protoc_insertion_point(class_scope:tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.All)
      })
    ,

    'Specific' : _reflection.GeneratedProtocolMessageType('Specific', (_message.Message,), {
      'DESCRIPTOR' : _FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY_SPECIFIC,
      '__module__' : 'tensorflow_serving.config.file_system_storage_path_source_pb2'
      # @@protoc_insertion_point(class_scope:tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy.Specific)
      })
    ,
    'DESCRIPTOR' : _FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLEVERSIONPOLICY,
    '__module__' : 'tensorflow_serving.config.file_system_storage_path_source_pb2'
    # @@protoc_insertion_point(class_scope:tensorflow.serving.FileSystemStoragePathSourceConfig.ServableVersionPolicy)
    })
  ,

  'ServableToMonitor' : _reflection.GeneratedProtocolMessageType('ServableToMonitor', (_message.Message,), {
    'DESCRIPTOR' : _FILESYSTEMSTORAGEPATHSOURCECONFIG_SERVABLETOMONITOR,
    '__module__' : 'tensorflow_serving.config.file_system_storage_path_source_pb2'
    # @@protoc_insertion_point(class_scope:tensorflow.serving.FileSystemStoragePathSourceConfig.ServableToMonitor)
    })
  ,
  'DESCRIPTOR' : _FILESYSTEMSTORAGEPATHSOURCECONFIG,
  '__module__' : 'tensorflow_serving.config.file_system_storage_path_source_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.serving.FileSystemStoragePathSourceConfig)
  })
_sym_db.RegisterMessage(FileSystemStoragePathSourceConfig)
_sym_db.RegisterMessage(FileSystemStoragePathSourceConfig.ServableVersionPolicy)
_sym_db.RegisterMessage(FileSystemStoragePathSourceConfig.ServableVersionPolicy.Latest)
_sym_db.RegisterMessage(FileSystemStoragePathSourceConfig.ServableVersionPolicy.All)
_sym_db.RegisterMessage(FileSystemStoragePathSourceConfig.ServableVersionPolicy.Specific)
_sym_db.RegisterMessage(FileSystemStoragePathSourceConfig.ServableToMonitor)


_FILESYSTEMSTORAGEPATHSOURCECONFIG.fields_by_name['servable_name']._options = None
_FILESYSTEMSTORAGEPATHSOURCECONFIG.fields_by_name['base_path']._options = None
_FILESYSTEMSTORAGEPATHSOURCECONFIG.fields_by_name['fail_if_zero_versions_at_startup']._options = None
# @@protoc_insertion_point(module_scope)
