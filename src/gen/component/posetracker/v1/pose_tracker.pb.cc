// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: component/posetracker/v1/pose_tracker.proto

#include "component/posetracker/v1/pose_tracker.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace viam {
namespace component {
namespace posetracker {
namespace v1 {
PROTOBUF_CONSTEXPR GetPosesRequest::GetPosesRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.body_names_)*/{}
  , /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GetPosesRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GetPosesRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GetPosesRequestDefaultTypeInternal() {}
  union {
    GetPosesRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GetPosesRequestDefaultTypeInternal _GetPosesRequest_default_instance_;
PROTOBUF_CONSTEXPR GetPosesResponse_BodyPosesEntry_DoNotUse::GetPosesResponse_BodyPosesEntry_DoNotUse(
    ::_pbi::ConstantInitialized) {}
struct GetPosesResponse_BodyPosesEntry_DoNotUseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GetPosesResponse_BodyPosesEntry_DoNotUseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GetPosesResponse_BodyPosesEntry_DoNotUseDefaultTypeInternal() {}
  union {
    GetPosesResponse_BodyPosesEntry_DoNotUse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GetPosesResponse_BodyPosesEntry_DoNotUseDefaultTypeInternal _GetPosesResponse_BodyPosesEntry_DoNotUse_default_instance_;
PROTOBUF_CONSTEXPR GetPosesResponse::GetPosesResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.body_poses_)*/{::_pbi::ConstantInitialized()}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GetPosesResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GetPosesResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GetPosesResponseDefaultTypeInternal() {}
  union {
    GetPosesResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GetPosesResponseDefaultTypeInternal _GetPosesResponse_default_instance_;
}  // namespace v1
}  // namespace posetracker
}  // namespace component
}  // namespace viam
static ::_pb::Metadata file_level_metadata_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto[3];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto = nullptr;

const uint32_t TableStruct_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::viam::component::posetracker::v1::GetPosesRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::viam::component::posetracker::v1::GetPosesRequest, _impl_.name_),
  PROTOBUF_FIELD_OFFSET(::viam::component::posetracker::v1::GetPosesRequest, _impl_.body_names_),
  PROTOBUF_FIELD_OFFSET(::viam::component::posetracker::v1::GetPosesResponse_BodyPosesEntry_DoNotUse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::viam::component::posetracker::v1::GetPosesResponse_BodyPosesEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::viam::component::posetracker::v1::GetPosesResponse_BodyPosesEntry_DoNotUse, key_),
  PROTOBUF_FIELD_OFFSET(::viam::component::posetracker::v1::GetPosesResponse_BodyPosesEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::viam::component::posetracker::v1::GetPosesResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::viam::component::posetracker::v1::GetPosesResponse, _impl_.body_poses_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::viam::component::posetracker::v1::GetPosesRequest)},
  { 8, 16, -1, sizeof(::viam::component::posetracker::v1::GetPosesResponse_BodyPosesEntry_DoNotUse)},
  { 18, -1, -1, sizeof(::viam::component::posetracker::v1::GetPosesResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::viam::component::posetracker::v1::_GetPosesRequest_default_instance_._instance,
  &::viam::component::posetracker::v1::_GetPosesResponse_BodyPosesEntry_DoNotUse_default_instance_._instance,
  &::viam::component::posetracker::v1::_GetPosesResponse_default_instance_._instance,
};

const char descriptor_table_protodef_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n+component/posetracker/v1/pose_tracker."
  "proto\022\035viam.component.posetracker.v1\032\026co"
  "mmon/v1/common.proto\032\034google/api/annotat"
  "ions.proto\"D\n\017GetPosesRequest\022\022\n\004name\030\001 "
  "\001(\tR\004name\022\035\n\nbody_names\030\002 \003(\tR\tbodyNames"
  "\"\314\001\n\020GetPosesResponse\022]\n\nbody_poses\030\001 \003("
  "\0132>.viam.component.posetracker.v1.GetPos"
  "esResponse.BodyPosesEntryR\tbodyPoses\032Y\n\016"
  "BodyPosesEntry\022\020\n\003key\030\001 \001(\tR\003key\0221\n\005valu"
  "e\030\002 \001(\0132\033.viam.common.v1.PoseInFrameR\005va"
  "lue:\0028\0012\274\001\n\022PoseTrackerService\022\245\001\n\010GetPo"
  "ses\022..viam.component.posetracker.v1.GetP"
  "osesRequest\032/.viam.component.posetracker"
  ".v1.GetPosesResponse\"8\202\323\344\223\0022\0220/viam/api/"
  "v1/component/pose_tracker/{name}/posesB5"
  "\n\025com.viam.component.v1Z\034go.viam.com/api"
  "/component/v1b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto_deps[2] = {
  &::descriptor_table_common_2fv1_2fcommon_2eproto,
  &::descriptor_table_google_2fapi_2fannotations_2eproto,
};
static ::_pbi::once_flag descriptor_table_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto = {
    false, false, 661, descriptor_table_protodef_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto,
    "component/posetracker/v1/pose_tracker.proto",
    &descriptor_table_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto_once, descriptor_table_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto_deps, 2, 3,
    schemas, file_default_instances, TableStruct_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto::offsets,
    file_level_metadata_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto, file_level_enum_descriptors_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto,
    file_level_service_descriptors_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto_getter() {
  return &descriptor_table_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto(&descriptor_table_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto);
namespace viam {
namespace component {
namespace posetracker {
namespace v1 {

// ===================================================================

class GetPosesRequest::_Internal {
 public:
};

GetPosesRequest::GetPosesRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:viam.component.posetracker.v1.GetPosesRequest)
}
GetPosesRequest::GetPosesRequest(const GetPosesRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GetPosesRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.body_names_){from._impl_.body_names_}
    , decltype(_impl_.name_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:viam.component.posetracker.v1.GetPosesRequest)
}

inline void GetPosesRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.body_names_){arena}
    , decltype(_impl_.name_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

GetPosesRequest::~GetPosesRequest() {
  // @@protoc_insertion_point(destructor:viam.component.posetracker.v1.GetPosesRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GetPosesRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.body_names_.~RepeatedPtrField();
  _impl_.name_.Destroy();
}

void GetPosesRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GetPosesRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:viam.component.posetracker.v1.GetPosesRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.body_names_.Clear();
  _impl_.name_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GetPosesRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string name = 1 [json_name = "name"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "viam.component.posetracker.v1.GetPosesRequest.name"));
        } else
          goto handle_unusual;
        continue;
      // repeated string body_names = 2 [json_name = "bodyNames"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_body_names();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "viam.component.posetracker.v1.GetPosesRequest.body_names"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* GetPosesRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:viam.component.posetracker.v1.GetPosesRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1 [json_name = "name"];
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "viam.component.posetracker.v1.GetPosesRequest.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // repeated string body_names = 2 [json_name = "bodyNames"];
  for (int i = 0, n = this->_internal_body_names_size(); i < n; i++) {
    const auto& s = this->_internal_body_names(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "viam.component.posetracker.v1.GetPosesRequest.body_names");
    target = stream->WriteString(2, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:viam.component.posetracker.v1.GetPosesRequest)
  return target;
}

size_t GetPosesRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:viam.component.posetracker.v1.GetPosesRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string body_names = 2 [json_name = "bodyNames"];
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.body_names_.size());
  for (int i = 0, n = _impl_.body_names_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.body_names_.Get(i));
  }

  // string name = 1 [json_name = "name"];
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GetPosesRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GetPosesRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetPosesRequest::GetClassData() const { return &_class_data_; }


void GetPosesRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GetPosesRequest*>(&to_msg);
  auto& from = static_cast<const GetPosesRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:viam.component.posetracker.v1.GetPosesRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.body_names_.MergeFrom(from._impl_.body_names_);
  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GetPosesRequest::CopyFrom(const GetPosesRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:viam.component.posetracker.v1.GetPosesRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetPosesRequest::IsInitialized() const {
  return true;
}

void GetPosesRequest::InternalSwap(GetPosesRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.body_names_.InternalSwap(&other->_impl_.body_names_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata GetPosesRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto_getter, &descriptor_table_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto_once,
      file_level_metadata_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto[0]);
}

// ===================================================================

GetPosesResponse_BodyPosesEntry_DoNotUse::GetPosesResponse_BodyPosesEntry_DoNotUse() {}
GetPosesResponse_BodyPosesEntry_DoNotUse::GetPosesResponse_BodyPosesEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : SuperType(arena) {}
void GetPosesResponse_BodyPosesEntry_DoNotUse::MergeFrom(const GetPosesResponse_BodyPosesEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::PROTOBUF_NAMESPACE_ID::Metadata GetPosesResponse_BodyPosesEntry_DoNotUse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto_getter, &descriptor_table_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto_once,
      file_level_metadata_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto[1]);
}

// ===================================================================

class GetPosesResponse::_Internal {
 public:
};

void GetPosesResponse::clear_body_poses() {
  _impl_.body_poses_.Clear();
}
GetPosesResponse::GetPosesResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  if (arena != nullptr && !is_message_owned) {
    arena->OwnCustomDestructor(this, &GetPosesResponse::ArenaDtor);
  }
  // @@protoc_insertion_point(arena_constructor:viam.component.posetracker.v1.GetPosesResponse)
}
GetPosesResponse::GetPosesResponse(const GetPosesResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GetPosesResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      /*decltype(_impl_.body_poses_)*/{}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.body_poses_.MergeFrom(from._impl_.body_poses_);
  // @@protoc_insertion_point(copy_constructor:viam.component.posetracker.v1.GetPosesResponse)
}

inline void GetPosesResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      /*decltype(_impl_.body_poses_)*/{::_pbi::ArenaInitialized(), arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

GetPosesResponse::~GetPosesResponse() {
  // @@protoc_insertion_point(destructor:viam.component.posetracker.v1.GetPosesResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    ArenaDtor(this);
    return;
  }
  SharedDtor();
}

inline void GetPosesResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.body_poses_.Destruct();
  _impl_.body_poses_.~MapField();
}

void GetPosesResponse::ArenaDtor(void* object) {
  GetPosesResponse* _this = reinterpret_cast< GetPosesResponse* >(object);
  _this->_impl_.body_poses_.Destruct();
}
void GetPosesResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GetPosesResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:viam.component.posetracker.v1.GetPosesResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.body_poses_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GetPosesResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // map<string, .viam.common.v1.PoseInFrame> body_poses = 1 [json_name = "bodyPoses"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(&_impl_.body_poses_, ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* GetPosesResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:viam.component.posetracker.v1.GetPosesResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // map<string, .viam.common.v1.PoseInFrame> body_poses = 1 [json_name = "bodyPoses"];
  if (!this->_internal_body_poses().empty()) {
    using MapType = ::_pb::Map<std::string, ::viam::common::v1::PoseInFrame>;
    using WireHelper = GetPosesResponse_BodyPosesEntry_DoNotUse::Funcs;
    const auto& map_field = this->_internal_body_poses();
    auto check_utf8 = [](const MapType::value_type& entry) {
      (void)entry;
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        entry.first.data(), static_cast<int>(entry.first.length()),
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
        "viam.component.posetracker.v1.GetPosesResponse.BodyPosesEntry.key");
    };

    if (stream->IsSerializationDeterministic() && map_field.size() > 1) {
      for (const auto& entry : ::_pbi::MapSorterPtr<MapType>(map_field)) {
        target = WireHelper::InternalSerialize(1, entry.first, entry.second, target, stream);
        check_utf8(entry);
      }
    } else {
      for (const auto& entry : map_field) {
        target = WireHelper::InternalSerialize(1, entry.first, entry.second, target, stream);
        check_utf8(entry);
      }
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:viam.component.posetracker.v1.GetPosesResponse)
  return target;
}

size_t GetPosesResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:viam.component.posetracker.v1.GetPosesResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // map<string, .viam.common.v1.PoseInFrame> body_poses = 1 [json_name = "bodyPoses"];
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_body_poses_size());
  for (::PROTOBUF_NAMESPACE_ID::Map< std::string, ::viam::common::v1::PoseInFrame >::const_iterator
      it = this->_internal_body_poses().begin();
      it != this->_internal_body_poses().end(); ++it) {
    total_size += GetPosesResponse_BodyPosesEntry_DoNotUse::Funcs::ByteSizeLong(it->first, it->second);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GetPosesResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GetPosesResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetPosesResponse::GetClassData() const { return &_class_data_; }


void GetPosesResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GetPosesResponse*>(&to_msg);
  auto& from = static_cast<const GetPosesResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:viam.component.posetracker.v1.GetPosesResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.body_poses_.MergeFrom(from._impl_.body_poses_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GetPosesResponse::CopyFrom(const GetPosesResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:viam.component.posetracker.v1.GetPosesResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetPosesResponse::IsInitialized() const {
  return true;
}

void GetPosesResponse::InternalSwap(GetPosesResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.body_poses_.InternalSwap(&other->_impl_.body_poses_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GetPosesResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto_getter, &descriptor_table_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto_once,
      file_level_metadata_component_2fposetracker_2fv1_2fpose_5ftracker_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace posetracker
}  // namespace component
}  // namespace viam
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::viam::component::posetracker::v1::GetPosesRequest*
Arena::CreateMaybeMessage< ::viam::component::posetracker::v1::GetPosesRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::viam::component::posetracker::v1::GetPosesRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::viam::component::posetracker::v1::GetPosesResponse_BodyPosesEntry_DoNotUse*
Arena::CreateMaybeMessage< ::viam::component::posetracker::v1::GetPosesResponse_BodyPosesEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::viam::component::posetracker::v1::GetPosesResponse_BodyPosesEntry_DoNotUse >(arena);
}
template<> PROTOBUF_NOINLINE ::viam::component::posetracker::v1::GetPosesResponse*
Arena::CreateMaybeMessage< ::viam::component::posetracker::v1::GetPosesResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::viam::component::posetracker::v1::GetPosesResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>