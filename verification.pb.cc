// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: verification.proto

#include "verification.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace verif {
class PhonePinRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PhonePinRequest>
      _instance;
} _PhonePinRequest_default_instance_;
class StatusResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<StatusResponse>
      _instance;
} _StatusResponse_default_instance_;
}  // namespace verif
namespace protobuf_verification_2eproto {
static void InitDefaultsPhonePinRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::verif::_PhonePinRequest_default_instance_;
    new (ptr) ::verif::PhonePinRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::verif::PhonePinRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_PhonePinRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsPhonePinRequest}, {}};

static void InitDefaultsStatusResponse() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::verif::_StatusResponse_default_instance_;
    new (ptr) ::verif::StatusResponse();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::verif::StatusResponse::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_StatusResponse =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsStatusResponse}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_PhonePinRequest.base);
  ::google::protobuf::internal::InitSCC(&scc_info_StatusResponse.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::verif::PhonePinRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::verif::PhonePinRequest, phone_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::verif::PhonePinRequest, pin_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::verif::StatusResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::verif::StatusResponse, status_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::verif::PhonePinRequest)},
  { 7, -1, sizeof(::verif::StatusResponse)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::verif::_PhonePinRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::verif::_StatusResponse_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "verification.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\022verification.proto\022\005verif\"-\n\017PhonePinR"
      "equest\022\r\n\005phone\030\001 \001(\003\022\013\n\003pin\030\002 \001(\003\" \n\016St"
      "atusResponse\022\016\n\006status\030\001 \001(\0102R\n\014Verifica"
      "tion\022B\n\021CheckValidTelefon\022\026.verif.PhoneP"
      "inRequest\032\025.verif.StatusResponseb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 200);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "verification.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_verification_2eproto
namespace verif {

// ===================================================================

void PhonePinRequest::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PhonePinRequest::kPhoneFieldNumber;
const int PhonePinRequest::kPinFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PhonePinRequest::PhonePinRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_verification_2eproto::scc_info_PhonePinRequest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:verif.PhonePinRequest)
}
PhonePinRequest::PhonePinRequest(const PhonePinRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&phone_, &from.phone_,
    static_cast<size_t>(reinterpret_cast<char*>(&pin_) -
    reinterpret_cast<char*>(&phone_)) + sizeof(pin_));
  // @@protoc_insertion_point(copy_constructor:verif.PhonePinRequest)
}

void PhonePinRequest::SharedCtor() {
  ::memset(&phone_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&pin_) -
      reinterpret_cast<char*>(&phone_)) + sizeof(pin_));
}

PhonePinRequest::~PhonePinRequest() {
  // @@protoc_insertion_point(destructor:verif.PhonePinRequest)
  SharedDtor();
}

void PhonePinRequest::SharedDtor() {
}

void PhonePinRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* PhonePinRequest::descriptor() {
  ::protobuf_verification_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_verification_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PhonePinRequest& PhonePinRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_verification_2eproto::scc_info_PhonePinRequest.base);
  return *internal_default_instance();
}


void PhonePinRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:verif.PhonePinRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&phone_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&pin_) -
      reinterpret_cast<char*>(&phone_)) + sizeof(pin_));
  _internal_metadata_.Clear();
}

bool PhonePinRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:verif.PhonePinRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 phone = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &phone_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 pin = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &pin_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:verif.PhonePinRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:verif.PhonePinRequest)
  return false;
#undef DO_
}

void PhonePinRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:verif.PhonePinRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 phone = 1;
  if (this->phone() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->phone(), output);
  }

  // int64 pin = 2;
  if (this->pin() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->pin(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:verif.PhonePinRequest)
}

::google::protobuf::uint8* PhonePinRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:verif.PhonePinRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 phone = 1;
  if (this->phone() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->phone(), target);
  }

  // int64 pin = 2;
  if (this->pin() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->pin(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:verif.PhonePinRequest)
  return target;
}

size_t PhonePinRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:verif.PhonePinRequest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int64 phone = 1;
  if (this->phone() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->phone());
  }

  // int64 pin = 2;
  if (this->pin() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->pin());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PhonePinRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:verif.PhonePinRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const PhonePinRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PhonePinRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:verif.PhonePinRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:verif.PhonePinRequest)
    MergeFrom(*source);
  }
}

void PhonePinRequest::MergeFrom(const PhonePinRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:verif.PhonePinRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.phone() != 0) {
    set_phone(from.phone());
  }
  if (from.pin() != 0) {
    set_pin(from.pin());
  }
}

void PhonePinRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:verif.PhonePinRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PhonePinRequest::CopyFrom(const PhonePinRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:verif.PhonePinRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PhonePinRequest::IsInitialized() const {
  return true;
}

void PhonePinRequest::Swap(PhonePinRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PhonePinRequest::InternalSwap(PhonePinRequest* other) {
  using std::swap;
  swap(phone_, other->phone_);
  swap(pin_, other->pin_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata PhonePinRequest::GetMetadata() const {
  protobuf_verification_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_verification_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void StatusResponse::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int StatusResponse::kStatusFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

StatusResponse::StatusResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_verification_2eproto::scc_info_StatusResponse.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:verif.StatusResponse)
}
StatusResponse::StatusResponse(const StatusResponse& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  status_ = from.status_;
  // @@protoc_insertion_point(copy_constructor:verif.StatusResponse)
}

void StatusResponse::SharedCtor() {
  status_ = false;
}

StatusResponse::~StatusResponse() {
  // @@protoc_insertion_point(destructor:verif.StatusResponse)
  SharedDtor();
}

void StatusResponse::SharedDtor() {
}

void StatusResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* StatusResponse::descriptor() {
  ::protobuf_verification_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_verification_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const StatusResponse& StatusResponse::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_verification_2eproto::scc_info_StatusResponse.base);
  return *internal_default_instance();
}


void StatusResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:verif.StatusResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  status_ = false;
  _internal_metadata_.Clear();
}

bool StatusResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:verif.StatusResponse)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool status = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &status_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:verif.StatusResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:verif.StatusResponse)
  return false;
#undef DO_
}

void StatusResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:verif.StatusResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool status = 1;
  if (this->status() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->status(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:verif.StatusResponse)
}

::google::protobuf::uint8* StatusResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:verif.StatusResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool status = 1;
  if (this->status() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->status(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:verif.StatusResponse)
  return target;
}

size_t StatusResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:verif.StatusResponse)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool status = 1;
  if (this->status() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void StatusResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:verif.StatusResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const StatusResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const StatusResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:verif.StatusResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:verif.StatusResponse)
    MergeFrom(*source);
  }
}

void StatusResponse::MergeFrom(const StatusResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:verif.StatusResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.status() != 0) {
    set_status(from.status());
  }
}

void StatusResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:verif.StatusResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StatusResponse::CopyFrom(const StatusResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:verif.StatusResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StatusResponse::IsInitialized() const {
  return true;
}

void StatusResponse::Swap(StatusResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void StatusResponse::InternalSwap(StatusResponse* other) {
  using std::swap;
  swap(status_, other->status_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata StatusResponse::GetMetadata() const {
  protobuf_verification_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_verification_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace verif
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::verif::PhonePinRequest* Arena::CreateMaybeMessage< ::verif::PhonePinRequest >(Arena* arena) {
  return Arena::CreateInternal< ::verif::PhonePinRequest >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::verif::StatusResponse* Arena::CreateMaybeMessage< ::verif::StatusResponse >(Arena* arena) {
  return Arena::CreateInternal< ::verif::StatusResponse >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
