// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/sensor/proto/adaptive_voxel_filter_options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/sensor/proto/adaptive_voxel_filter_options.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace sensor {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* AdaptiveVoxelFilterOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AdaptiveVoxelFilterOptions_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fsensor_2fproto_2fadaptive_5fvoxel_5ffilter_5foptions_2eproto() {
  protobuf_AddDesc_cartographer_2fsensor_2fproto_2fadaptive_5fvoxel_5ffilter_5foptions_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/sensor/proto/adaptive_voxel_filter_options.proto");
  GOOGLE_CHECK(file != NULL);
  AdaptiveVoxelFilterOptions_descriptor_ = file->message_type(0);
  static const int AdaptiveVoxelFilterOptions_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AdaptiveVoxelFilterOptions, max_length_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AdaptiveVoxelFilterOptions, min_num_points_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AdaptiveVoxelFilterOptions, max_range_),
  };
  AdaptiveVoxelFilterOptions_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      AdaptiveVoxelFilterOptions_descriptor_,
      AdaptiveVoxelFilterOptions::default_instance_,
      AdaptiveVoxelFilterOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AdaptiveVoxelFilterOptions, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AdaptiveVoxelFilterOptions, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(AdaptiveVoxelFilterOptions));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fsensor_2fproto_2fadaptive_5fvoxel_5ffilter_5foptions_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    AdaptiveVoxelFilterOptions_descriptor_, &AdaptiveVoxelFilterOptions::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fsensor_2fproto_2fadaptive_5fvoxel_5ffilter_5foptions_2eproto() {
  delete AdaptiveVoxelFilterOptions::default_instance_;
  delete AdaptiveVoxelFilterOptions_reflection_;
}

void protobuf_AddDesc_cartographer_2fsensor_2fproto_2fadaptive_5fvoxel_5ffilter_5foptions_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n=cartographer/sensor/proto/adaptive_vox"
    "el_filter_options.proto\022\031cartographer.se"
    "nsor.proto\"[\n\032AdaptiveVoxelFilterOptions"
    "\022\022\n\nmax_length\030\001 \001(\002\022\026\n\016min_num_points\030\002"
    " \001(\002\022\021\n\tmax_range\030\003 \001(\002", 183);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/sensor/proto/adaptive_voxel_filter_options.proto", &protobuf_RegisterTypes);
  AdaptiveVoxelFilterOptions::default_instance_ = new AdaptiveVoxelFilterOptions();
  AdaptiveVoxelFilterOptions::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fsensor_2fproto_2fadaptive_5fvoxel_5ffilter_5foptions_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fsensor_2fproto_2fadaptive_5fvoxel_5ffilter_5foptions_2eproto {
  StaticDescriptorInitializer_cartographer_2fsensor_2fproto_2fadaptive_5fvoxel_5ffilter_5foptions_2eproto() {
    protobuf_AddDesc_cartographer_2fsensor_2fproto_2fadaptive_5fvoxel_5ffilter_5foptions_2eproto();
  }
} static_descriptor_initializer_cartographer_2fsensor_2fproto_2fadaptive_5fvoxel_5ffilter_5foptions_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int AdaptiveVoxelFilterOptions::kMaxLengthFieldNumber;
const int AdaptiveVoxelFilterOptions::kMinNumPointsFieldNumber;
const int AdaptiveVoxelFilterOptions::kMaxRangeFieldNumber;
#endif  // !_MSC_VER

AdaptiveVoxelFilterOptions::AdaptiveVoxelFilterOptions()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.sensor.proto.AdaptiveVoxelFilterOptions)
}

void AdaptiveVoxelFilterOptions::InitAsDefaultInstance() {
}

AdaptiveVoxelFilterOptions::AdaptiveVoxelFilterOptions(const AdaptiveVoxelFilterOptions& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cartographer.sensor.proto.AdaptiveVoxelFilterOptions)
}

void AdaptiveVoxelFilterOptions::SharedCtor() {
  _cached_size_ = 0;
  max_length_ = 0;
  min_num_points_ = 0;
  max_range_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AdaptiveVoxelFilterOptions::~AdaptiveVoxelFilterOptions() {
  // @@protoc_insertion_point(destructor:cartographer.sensor.proto.AdaptiveVoxelFilterOptions)
  SharedDtor();
}

void AdaptiveVoxelFilterOptions::SharedDtor() {
  if (this != default_instance_) {
  }
}

void AdaptiveVoxelFilterOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AdaptiveVoxelFilterOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AdaptiveVoxelFilterOptions_descriptor_;
}

const AdaptiveVoxelFilterOptions& AdaptiveVoxelFilterOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fsensor_2fproto_2fadaptive_5fvoxel_5ffilter_5foptions_2eproto();
  return *default_instance_;
}

AdaptiveVoxelFilterOptions* AdaptiveVoxelFilterOptions::default_instance_ = NULL;

AdaptiveVoxelFilterOptions* AdaptiveVoxelFilterOptions::New() const {
  return new AdaptiveVoxelFilterOptions;
}

void AdaptiveVoxelFilterOptions::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<AdaptiveVoxelFilterOptions*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(max_length_, max_range_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AdaptiveVoxelFilterOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.sensor.proto.AdaptiveVoxelFilterOptions)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional float max_length = 1;
      case 1: {
        if (tag == 13) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &max_length_)));
          set_has_max_length();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(21)) goto parse_min_num_points;
        break;
      }

      // optional float min_num_points = 2;
      case 2: {
        if (tag == 21) {
         parse_min_num_points:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &min_num_points_)));
          set_has_min_num_points();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(29)) goto parse_max_range;
        break;
      }

      // optional float max_range = 3;
      case 3: {
        if (tag == 29) {
         parse_max_range:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &max_range_)));
          set_has_max_range();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cartographer.sensor.proto.AdaptiveVoxelFilterOptions)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.sensor.proto.AdaptiveVoxelFilterOptions)
  return false;
#undef DO_
}

void AdaptiveVoxelFilterOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.sensor.proto.AdaptiveVoxelFilterOptions)
  // optional float max_length = 1;
  if (has_max_length()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->max_length(), output);
  }

  // optional float min_num_points = 2;
  if (has_min_num_points()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->min_num_points(), output);
  }

  // optional float max_range = 3;
  if (has_max_range()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->max_range(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.sensor.proto.AdaptiveVoxelFilterOptions)
}

::google::protobuf::uint8* AdaptiveVoxelFilterOptions::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.sensor.proto.AdaptiveVoxelFilterOptions)
  // optional float max_length = 1;
  if (has_max_length()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->max_length(), target);
  }

  // optional float min_num_points = 2;
  if (has_min_num_points()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->min_num_points(), target);
  }

  // optional float max_range = 3;
  if (has_max_range()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->max_range(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.sensor.proto.AdaptiveVoxelFilterOptions)
  return target;
}

int AdaptiveVoxelFilterOptions::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional float max_length = 1;
    if (has_max_length()) {
      total_size += 1 + 4;
    }

    // optional float min_num_points = 2;
    if (has_min_num_points()) {
      total_size += 1 + 4;
    }

    // optional float max_range = 3;
    if (has_max_range()) {
      total_size += 1 + 4;
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AdaptiveVoxelFilterOptions::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const AdaptiveVoxelFilterOptions* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const AdaptiveVoxelFilterOptions*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AdaptiveVoxelFilterOptions::MergeFrom(const AdaptiveVoxelFilterOptions& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_max_length()) {
      set_max_length(from.max_length());
    }
    if (from.has_min_num_points()) {
      set_min_num_points(from.min_num_points());
    }
    if (from.has_max_range()) {
      set_max_range(from.max_range());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AdaptiveVoxelFilterOptions::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AdaptiveVoxelFilterOptions::CopyFrom(const AdaptiveVoxelFilterOptions& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AdaptiveVoxelFilterOptions::IsInitialized() const {

  return true;
}

void AdaptiveVoxelFilterOptions::Swap(AdaptiveVoxelFilterOptions* other) {
  if (other != this) {
    std::swap(max_length_, other->max_length_);
    std::swap(min_num_points_, other->min_num_points_);
    std::swap(max_range_, other->max_range_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata AdaptiveVoxelFilterOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AdaptiveVoxelFilterOptions_descriptor_;
  metadata.reflection = AdaptiveVoxelFilterOptions_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace sensor
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
