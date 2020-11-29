# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: verification.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='verification.proto',
  package='verif',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x12verification.proto\x12\x05verif\"-\n\x0fPhonePinRequest\x12\r\n\x05phone\x18\x01 \x01(\x03\x12\x0b\n\x03pin\x18\x02 \x01(\x03\" \n\x0eStatusResponse\x12\x0e\n\x06status\x18\x01 \x01(\x08\x32L\n\x0cVerification\x12<\n\x0b\x43heckClient\x12\x16.verif.PhonePinRequest\x1a\x15.verif.StatusResponseb\x06proto3'
)




_PHONEPINREQUEST = _descriptor.Descriptor(
  name='PhonePinRequest',
  full_name='verif.PhonePinRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='phone', full_name='verif.PhonePinRequest.phone', index=0,
      number=1, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='pin', full_name='verif.PhonePinRequest.pin', index=1,
      number=2, type=3, cpp_type=2, label=1,
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
  serialized_start=29,
  serialized_end=74,
)


_STATUSRESPONSE = _descriptor.Descriptor(
  name='StatusResponse',
  full_name='verif.StatusResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='status', full_name='verif.StatusResponse.status', index=0,
      number=1, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
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
  serialized_start=76,
  serialized_end=108,
)

DESCRIPTOR.message_types_by_name['PhonePinRequest'] = _PHONEPINREQUEST
DESCRIPTOR.message_types_by_name['StatusResponse'] = _STATUSRESPONSE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

PhonePinRequest = _reflection.GeneratedProtocolMessageType('PhonePinRequest', (_message.Message,), {
  'DESCRIPTOR' : _PHONEPINREQUEST,
  '__module__' : 'verification_pb2'
  # @@protoc_insertion_point(class_scope:verif.PhonePinRequest)
  })
_sym_db.RegisterMessage(PhonePinRequest)

StatusResponse = _reflection.GeneratedProtocolMessageType('StatusResponse', (_message.Message,), {
  'DESCRIPTOR' : _STATUSRESPONSE,
  '__module__' : 'verification_pb2'
  # @@protoc_insertion_point(class_scope:verif.StatusResponse)
  })
_sym_db.RegisterMessage(StatusResponse)



_VERIFICATION = _descriptor.ServiceDescriptor(
  name='Verification',
  full_name='verif.Verification',
  file=DESCRIPTOR,
  index=0,
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_start=110,
  serialized_end=186,
  methods=[
  _descriptor.MethodDescriptor(
    name='CheckClient',
    full_name='verif.Verification.CheckClient',
    index=0,
    containing_service=None,
    input_type=_PHONEPINREQUEST,
    output_type=_STATUSRESPONSE,
    serialized_options=None,
    create_key=_descriptor._internal_create_key,
  ),
])
_sym_db.RegisterServiceDescriptor(_VERIFICATION)

DESCRIPTOR.services_by_name['Verification'] = _VERIFICATION

# @@protoc_insertion_point(module_scope)
