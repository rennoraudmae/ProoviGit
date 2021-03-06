// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping_3d/proto/kalman_local_trajectory_builder_options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping_3d/proto/kalman_local_trajectory_builder_options.pb.h"

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
namespace mapping_3d {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* KalmanLocalTrajectoryBuilderOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  KalmanLocalTrajectoryBuilderOptions_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fmapping_5f3d_2fproto_2fkalman_5flocal_5ftrajectory_5fbuilder_5foptions_2eproto() {
  protobuf_AddDesc_cartographer_2fmapping_5f3d_2fproto_2fkalman_5flocal_5ftrajectory_5fbuilder_5foptions_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/mapping_3d/proto/kalman_local_trajectory_builder_options.proto");
  GOOGLE_CHECK(file != NULL);
  KalmanLocalTrajectoryBuilderOptions_descriptor_ = file->message_type(0);
  static const int KalmanLocalTrajectoryBuilderOptions_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KalmanLocalTrajectoryBuilderOptions, use_online_correlative_scan_matching_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KalmanLocalTrajectoryBuilderOptions, real_time_correlative_scan_matcher_options_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KalmanLocalTrajectoryBuilderOptions, pose_tracker_options_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KalmanLocalTrajectoryBuilderOptions, scan_matcher_variance_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KalmanLocalTrajectoryBuilderOptions, odometer_translational_variance_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KalmanLocalTrajectoryBuilderOptions, odometer_rotational_variance_),
  };
  KalmanLocalTrajectoryBuilderOptions_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      KalmanLocalTrajectoryBuilderOptions_descriptor_,
      KalmanLocalTrajectoryBuilderOptions::default_instance_,
      KalmanLocalTrajectoryBuilderOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KalmanLocalTrajectoryBuilderOptions, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KalmanLocalTrajectoryBuilderOptions, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(KalmanLocalTrajectoryBuilderOptions));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fmapping_5f3d_2fproto_2fkalman_5flocal_5ftrajectory_5fbuilder_5foptions_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    KalmanLocalTrajectoryBuilderOptions_descriptor_, &KalmanLocalTrajectoryBuilderOptions::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fmapping_5f3d_2fproto_2fkalman_5flocal_5ftrajectory_5fbuilder_5foptions_2eproto() {
  delete KalmanLocalTrajectoryBuilderOptions::default_instance_;
  delete KalmanLocalTrajectoryBuilderOptions_reflection_;
}

void protobuf_AddDesc_cartographer_2fmapping_5f3d_2fproto_2fkalman_5flocal_5ftrajectory_5fbuilder_5foptions_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::cartographer::kalman_filter::proto::protobuf_AddDesc_cartographer_2fkalman_5ffilter_2fproto_2fpose_5ftracker_5foptions_2eproto();
  ::cartographer::mapping_2d::scan_matching::proto::protobuf_AddDesc_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2freal_5ftime_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\nKcartographer/mapping_3d/proto/kalman_l"
    "ocal_trajectory_builder_options.proto\022\035c"
    "artographer.mapping_3d.proto\032;cartograph"
    "er/kalman_filter/proto/pose_tracker_opti"
    "ons.proto\032\\cartographer/mapping_2d/scan_"
    "matching/proto/real_time_correlative_sca"
    "n_matcher_options.proto\"\236\003\n#KalmanLocalT"
    "rajectoryBuilderOptions\022,\n$use_online_co"
    "rrelative_scan_matching\030\001 \001(\010\022\206\001\n*real_t"
    "ime_correlative_scan_matcher_options\030\002 \001"
    "(\0132R.cartographer.mapping_2d.scan_matchi"
    "ng.proto.RealTimeCorrelativeScanMatcherO"
    "ptions\022R\n\024pose_tracker_options\030\003 \001(\01324.c"
    "artographer.kalman_filter.proto.PoseTrac"
    "kerOptions\022\035\n\025scan_matcher_variance\030\006 \001("
    "\001\022\'\n\037odometer_translational_variance\030\004 \001"
    "(\001\022$\n\034odometer_rotational_variance\030\005 \001(\001", 680);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping_3d/proto/kalman_local_trajectory_builder_options.proto", &protobuf_RegisterTypes);
  KalmanLocalTrajectoryBuilderOptions::default_instance_ = new KalmanLocalTrajectoryBuilderOptions();
  KalmanLocalTrajectoryBuilderOptions::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fmapping_5f3d_2fproto_2fkalman_5flocal_5ftrajectory_5fbuilder_5foptions_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fmapping_5f3d_2fproto_2fkalman_5flocal_5ftrajectory_5fbuilder_5foptions_2eproto {
  StaticDescriptorInitializer_cartographer_2fmapping_5f3d_2fproto_2fkalman_5flocal_5ftrajectory_5fbuilder_5foptions_2eproto() {
    protobuf_AddDesc_cartographer_2fmapping_5f3d_2fproto_2fkalman_5flocal_5ftrajectory_5fbuilder_5foptions_2eproto();
  }
} static_descriptor_initializer_cartographer_2fmapping_5f3d_2fproto_2fkalman_5flocal_5ftrajectory_5fbuilder_5foptions_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int KalmanLocalTrajectoryBuilderOptions::kUseOnlineCorrelativeScanMatchingFieldNumber;
const int KalmanLocalTrajectoryBuilderOptions::kRealTimeCorrelativeScanMatcherOptionsFieldNumber;
const int KalmanLocalTrajectoryBuilderOptions::kPoseTrackerOptionsFieldNumber;
const int KalmanLocalTrajectoryBuilderOptions::kScanMatcherVarianceFieldNumber;
const int KalmanLocalTrajectoryBuilderOptions::kOdometerTranslationalVarianceFieldNumber;
const int KalmanLocalTrajectoryBuilderOptions::kOdometerRotationalVarianceFieldNumber;
#endif  // !_MSC_VER

KalmanLocalTrajectoryBuilderOptions::KalmanLocalTrajectoryBuilderOptions()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping_3d.proto.KalmanLocalTrajectoryBuilderOptions)
}

void KalmanLocalTrajectoryBuilderOptions::InitAsDefaultInstance() {
  real_time_correlative_scan_matcher_options_ = const_cast< ::cartographer::mapping_2d::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions*>(&::cartographer::mapping_2d::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions::default_instance());
  pose_tracker_options_ = const_cast< ::cartographer::kalman_filter::proto::PoseTrackerOptions*>(&::cartographer::kalman_filter::proto::PoseTrackerOptions::default_instance());
}

KalmanLocalTrajectoryBuilderOptions::KalmanLocalTrajectoryBuilderOptions(const KalmanLocalTrajectoryBuilderOptions& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping_3d.proto.KalmanLocalTrajectoryBuilderOptions)
}

void KalmanLocalTrajectoryBuilderOptions::SharedCtor() {
  _cached_size_ = 0;
  use_online_correlative_scan_matching_ = false;
  real_time_correlative_scan_matcher_options_ = NULL;
  pose_tracker_options_ = NULL;
  scan_matcher_variance_ = 0;
  odometer_translational_variance_ = 0;
  odometer_rotational_variance_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

KalmanLocalTrajectoryBuilderOptions::~KalmanLocalTrajectoryBuilderOptions() {
  // @@protoc_insertion_point(destructor:cartographer.mapping_3d.proto.KalmanLocalTrajectoryBuilderOptions)
  SharedDtor();
}

void KalmanLocalTrajectoryBuilderOptions::SharedDtor() {
  if (this != default_instance_) {
    delete real_time_correlative_scan_matcher_options_;
    delete pose_tracker_options_;
  }
}

void KalmanLocalTrajectoryBuilderOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* KalmanLocalTrajectoryBuilderOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return KalmanLocalTrajectoryBuilderOptions_descriptor_;
}

const KalmanLocalTrajectoryBuilderOptions& KalmanLocalTrajectoryBuilderOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_5f3d_2fproto_2fkalman_5flocal_5ftrajectory_5fbuilder_5foptions_2eproto();
  return *default_instance_;
}

KalmanLocalTrajectoryBuilderOptions* KalmanLocalTrajectoryBuilderOptions::default_instance_ = NULL;

KalmanLocalTrajectoryBuilderOptions* KalmanLocalTrajectoryBuilderOptions::New() const {
  return new KalmanLocalTrajectoryBuilderOptions;
}

void KalmanLocalTrajectoryBuilderOptions::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<KalmanLocalTrajectoryBuilderOptions*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 63) {
    ZR_(scan_matcher_variance_, use_online_correlative_scan_matching_);
    if (has_real_time_correlative_scan_matcher_options()) {
      if (real_time_correlative_scan_matcher_options_ != NULL) real_time_correlative_scan_matcher_options_->::cartographer::mapping_2d::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions::Clear();
    }
    if (has_pose_tracker_options()) {
      if (pose_tracker_options_ != NULL) pose_tracker_options_->::cartographer::kalman_filter::proto::PoseTrackerOptions::Clear();
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool KalmanLocalTrajectoryBuilderOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping_3d.proto.KalmanLocalTrajectoryBuilderOptions)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool use_online_correlative_scan_matching = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &use_online_correlative_scan_matching_)));
          set_has_use_online_correlative_scan_matching();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_real_time_correlative_scan_matcher_options;
        break;
      }

      // optional .cartographer.mapping_2d.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions real_time_correlative_scan_matcher_options = 2;
      case 2: {
        if (tag == 18) {
         parse_real_time_correlative_scan_matcher_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_real_time_correlative_scan_matcher_options()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_pose_tracker_options;
        break;
      }

      // optional .cartographer.kalman_filter.proto.PoseTrackerOptions pose_tracker_options = 3;
      case 3: {
        if (tag == 26) {
         parse_pose_tracker_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pose_tracker_options()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(33)) goto parse_odometer_translational_variance;
        break;
      }

      // optional double odometer_translational_variance = 4;
      case 4: {
        if (tag == 33) {
         parse_odometer_translational_variance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &odometer_translational_variance_)));
          set_has_odometer_translational_variance();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(41)) goto parse_odometer_rotational_variance;
        break;
      }

      // optional double odometer_rotational_variance = 5;
      case 5: {
        if (tag == 41) {
         parse_odometer_rotational_variance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &odometer_rotational_variance_)));
          set_has_odometer_rotational_variance();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(49)) goto parse_scan_matcher_variance;
        break;
      }

      // optional double scan_matcher_variance = 6;
      case 6: {
        if (tag == 49) {
         parse_scan_matcher_variance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &scan_matcher_variance_)));
          set_has_scan_matcher_variance();
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
  // @@protoc_insertion_point(parse_success:cartographer.mapping_3d.proto.KalmanLocalTrajectoryBuilderOptions)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping_3d.proto.KalmanLocalTrajectoryBuilderOptions)
  return false;
#undef DO_
}

void KalmanLocalTrajectoryBuilderOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping_3d.proto.KalmanLocalTrajectoryBuilderOptions)
  // optional bool use_online_correlative_scan_matching = 1;
  if (has_use_online_correlative_scan_matching()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->use_online_correlative_scan_matching(), output);
  }

  // optional .cartographer.mapping_2d.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions real_time_correlative_scan_matcher_options = 2;
  if (has_real_time_correlative_scan_matcher_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->real_time_correlative_scan_matcher_options(), output);
  }

  // optional .cartographer.kalman_filter.proto.PoseTrackerOptions pose_tracker_options = 3;
  if (has_pose_tracker_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->pose_tracker_options(), output);
  }

  // optional double odometer_translational_variance = 4;
  if (has_odometer_translational_variance()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->odometer_translational_variance(), output);
  }

  // optional double odometer_rotational_variance = 5;
  if (has_odometer_rotational_variance()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->odometer_rotational_variance(), output);
  }

  // optional double scan_matcher_variance = 6;
  if (has_scan_matcher_variance()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->scan_matcher_variance(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.mapping_3d.proto.KalmanLocalTrajectoryBuilderOptions)
}

::google::protobuf::uint8* KalmanLocalTrajectoryBuilderOptions::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping_3d.proto.KalmanLocalTrajectoryBuilderOptions)
  // optional bool use_online_correlative_scan_matching = 1;
  if (has_use_online_correlative_scan_matching()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->use_online_correlative_scan_matching(), target);
  }

  // optional .cartographer.mapping_2d.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions real_time_correlative_scan_matcher_options = 2;
  if (has_real_time_correlative_scan_matcher_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->real_time_correlative_scan_matcher_options(), target);
  }

  // optional .cartographer.kalman_filter.proto.PoseTrackerOptions pose_tracker_options = 3;
  if (has_pose_tracker_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->pose_tracker_options(), target);
  }

  // optional double odometer_translational_variance = 4;
  if (has_odometer_translational_variance()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->odometer_translational_variance(), target);
  }

  // optional double odometer_rotational_variance = 5;
  if (has_odometer_rotational_variance()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->odometer_rotational_variance(), target);
  }

  // optional double scan_matcher_variance = 6;
  if (has_scan_matcher_variance()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->scan_matcher_variance(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping_3d.proto.KalmanLocalTrajectoryBuilderOptions)
  return target;
}

int KalmanLocalTrajectoryBuilderOptions::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bool use_online_correlative_scan_matching = 1;
    if (has_use_online_correlative_scan_matching()) {
      total_size += 1 + 1;
    }

    // optional .cartographer.mapping_2d.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions real_time_correlative_scan_matcher_options = 2;
    if (has_real_time_correlative_scan_matcher_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->real_time_correlative_scan_matcher_options());
    }

    // optional .cartographer.kalman_filter.proto.PoseTrackerOptions pose_tracker_options = 3;
    if (has_pose_tracker_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->pose_tracker_options());
    }

    // optional double scan_matcher_variance = 6;
    if (has_scan_matcher_variance()) {
      total_size += 1 + 8;
    }

    // optional double odometer_translational_variance = 4;
    if (has_odometer_translational_variance()) {
      total_size += 1 + 8;
    }

    // optional double odometer_rotational_variance = 5;
    if (has_odometer_rotational_variance()) {
      total_size += 1 + 8;
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

void KalmanLocalTrajectoryBuilderOptions::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const KalmanLocalTrajectoryBuilderOptions* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const KalmanLocalTrajectoryBuilderOptions*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void KalmanLocalTrajectoryBuilderOptions::MergeFrom(const KalmanLocalTrajectoryBuilderOptions& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_use_online_correlative_scan_matching()) {
      set_use_online_correlative_scan_matching(from.use_online_correlative_scan_matching());
    }
    if (from.has_real_time_correlative_scan_matcher_options()) {
      mutable_real_time_correlative_scan_matcher_options()->::cartographer::mapping_2d::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions::MergeFrom(from.real_time_correlative_scan_matcher_options());
    }
    if (from.has_pose_tracker_options()) {
      mutable_pose_tracker_options()->::cartographer::kalman_filter::proto::PoseTrackerOptions::MergeFrom(from.pose_tracker_options());
    }
    if (from.has_scan_matcher_variance()) {
      set_scan_matcher_variance(from.scan_matcher_variance());
    }
    if (from.has_odometer_translational_variance()) {
      set_odometer_translational_variance(from.odometer_translational_variance());
    }
    if (from.has_odometer_rotational_variance()) {
      set_odometer_rotational_variance(from.odometer_rotational_variance());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void KalmanLocalTrajectoryBuilderOptions::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void KalmanLocalTrajectoryBuilderOptions::CopyFrom(const KalmanLocalTrajectoryBuilderOptions& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool KalmanLocalTrajectoryBuilderOptions::IsInitialized() const {

  return true;
}

void KalmanLocalTrajectoryBuilderOptions::Swap(KalmanLocalTrajectoryBuilderOptions* other) {
  if (other != this) {
    std::swap(use_online_correlative_scan_matching_, other->use_online_correlative_scan_matching_);
    std::swap(real_time_correlative_scan_matcher_options_, other->real_time_correlative_scan_matcher_options_);
    std::swap(pose_tracker_options_, other->pose_tracker_options_);
    std::swap(scan_matcher_variance_, other->scan_matcher_variance_);
    std::swap(odometer_translational_variance_, other->odometer_translational_variance_);
    std::swap(odometer_rotational_variance_, other->odometer_rotational_variance_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata KalmanLocalTrajectoryBuilderOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = KalmanLocalTrajectoryBuilderOptions_descriptor_;
  metadata.reflection = KalmanLocalTrajectoryBuilderOptions_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping_3d
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
