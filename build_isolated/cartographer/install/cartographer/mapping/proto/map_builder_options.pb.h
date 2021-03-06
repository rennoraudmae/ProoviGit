// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/map_builder_options.proto

#ifndef PROTOBUF_cartographer_2fmapping_2fproto_2fmap_5fbuilder_5foptions_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2fproto_2fmap_5fbuilder_5foptions_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "cartographer/mapping/proto/sparse_pose_graph_options.pb.h"
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fmap_5fbuilder_5foptions_2eproto();
void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fmap_5fbuilder_5foptions_2eproto();
void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fmap_5fbuilder_5foptions_2eproto();

class MapBuilderOptions;

// ===================================================================

class MapBuilderOptions : public ::google::protobuf::Message {
 public:
  MapBuilderOptions();
  virtual ~MapBuilderOptions();

  MapBuilderOptions(const MapBuilderOptions& from);

  inline MapBuilderOptions& operator=(const MapBuilderOptions& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MapBuilderOptions& default_instance();

  void Swap(MapBuilderOptions* other);

  // implements Message ----------------------------------------------

  MapBuilderOptions* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MapBuilderOptions& from);
  void MergeFrom(const MapBuilderOptions& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bool use_trajectory_builder_2d = 1;
  inline bool has_use_trajectory_builder_2d() const;
  inline void clear_use_trajectory_builder_2d();
  static const int kUseTrajectoryBuilder2DFieldNumber = 1;
  inline bool use_trajectory_builder_2d() const;
  inline void set_use_trajectory_builder_2d(bool value);

  // optional bool use_trajectory_builder_3d = 2;
  inline bool has_use_trajectory_builder_3d() const;
  inline void clear_use_trajectory_builder_3d();
  static const int kUseTrajectoryBuilder3DFieldNumber = 2;
  inline bool use_trajectory_builder_3d() const;
  inline void set_use_trajectory_builder_3d(bool value);

  // optional int32 num_background_threads = 3;
  inline bool has_num_background_threads() const;
  inline void clear_num_background_threads();
  static const int kNumBackgroundThreadsFieldNumber = 3;
  inline ::google::protobuf::int32 num_background_threads() const;
  inline void set_num_background_threads(::google::protobuf::int32 value);

  // optional .cartographer.mapping.proto.SparsePoseGraphOptions sparse_pose_graph_options = 4;
  inline bool has_sparse_pose_graph_options() const;
  inline void clear_sparse_pose_graph_options();
  static const int kSparsePoseGraphOptionsFieldNumber = 4;
  inline const ::cartographer::mapping::proto::SparsePoseGraphOptions& sparse_pose_graph_options() const;
  inline ::cartographer::mapping::proto::SparsePoseGraphOptions* mutable_sparse_pose_graph_options();
  inline ::cartographer::mapping::proto::SparsePoseGraphOptions* release_sparse_pose_graph_options();
  inline void set_allocated_sparse_pose_graph_options(::cartographer::mapping::proto::SparsePoseGraphOptions* sparse_pose_graph_options);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.MapBuilderOptions)
 private:
  inline void set_has_use_trajectory_builder_2d();
  inline void clear_has_use_trajectory_builder_2d();
  inline void set_has_use_trajectory_builder_3d();
  inline void clear_has_use_trajectory_builder_3d();
  inline void set_has_num_background_threads();
  inline void clear_has_num_background_threads();
  inline void set_has_sparse_pose_graph_options();
  inline void clear_has_sparse_pose_graph_options();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  bool use_trajectory_builder_2d_;
  bool use_trajectory_builder_3d_;
  ::google::protobuf::int32 num_background_threads_;
  ::cartographer::mapping::proto::SparsePoseGraphOptions* sparse_pose_graph_options_;
  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fmap_5fbuilder_5foptions_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fmap_5fbuilder_5foptions_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fmap_5fbuilder_5foptions_2eproto();

  void InitAsDefaultInstance();
  static MapBuilderOptions* default_instance_;
};
// ===================================================================


// ===================================================================

// MapBuilderOptions

// optional bool use_trajectory_builder_2d = 1;
inline bool MapBuilderOptions::has_use_trajectory_builder_2d() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MapBuilderOptions::set_has_use_trajectory_builder_2d() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MapBuilderOptions::clear_has_use_trajectory_builder_2d() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MapBuilderOptions::clear_use_trajectory_builder_2d() {
  use_trajectory_builder_2d_ = false;
  clear_has_use_trajectory_builder_2d();
}
inline bool MapBuilderOptions::use_trajectory_builder_2d() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.MapBuilderOptions.use_trajectory_builder_2d)
  return use_trajectory_builder_2d_;
}
inline void MapBuilderOptions::set_use_trajectory_builder_2d(bool value) {
  set_has_use_trajectory_builder_2d();
  use_trajectory_builder_2d_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.MapBuilderOptions.use_trajectory_builder_2d)
}

// optional bool use_trajectory_builder_3d = 2;
inline bool MapBuilderOptions::has_use_trajectory_builder_3d() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MapBuilderOptions::set_has_use_trajectory_builder_3d() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MapBuilderOptions::clear_has_use_trajectory_builder_3d() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MapBuilderOptions::clear_use_trajectory_builder_3d() {
  use_trajectory_builder_3d_ = false;
  clear_has_use_trajectory_builder_3d();
}
inline bool MapBuilderOptions::use_trajectory_builder_3d() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.MapBuilderOptions.use_trajectory_builder_3d)
  return use_trajectory_builder_3d_;
}
inline void MapBuilderOptions::set_use_trajectory_builder_3d(bool value) {
  set_has_use_trajectory_builder_3d();
  use_trajectory_builder_3d_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.MapBuilderOptions.use_trajectory_builder_3d)
}

// optional int32 num_background_threads = 3;
inline bool MapBuilderOptions::has_num_background_threads() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MapBuilderOptions::set_has_num_background_threads() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MapBuilderOptions::clear_has_num_background_threads() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MapBuilderOptions::clear_num_background_threads() {
  num_background_threads_ = 0;
  clear_has_num_background_threads();
}
inline ::google::protobuf::int32 MapBuilderOptions::num_background_threads() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.MapBuilderOptions.num_background_threads)
  return num_background_threads_;
}
inline void MapBuilderOptions::set_num_background_threads(::google::protobuf::int32 value) {
  set_has_num_background_threads();
  num_background_threads_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.MapBuilderOptions.num_background_threads)
}

// optional .cartographer.mapping.proto.SparsePoseGraphOptions sparse_pose_graph_options = 4;
inline bool MapBuilderOptions::has_sparse_pose_graph_options() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MapBuilderOptions::set_has_sparse_pose_graph_options() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MapBuilderOptions::clear_has_sparse_pose_graph_options() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MapBuilderOptions::clear_sparse_pose_graph_options() {
  if (sparse_pose_graph_options_ != NULL) sparse_pose_graph_options_->::cartographer::mapping::proto::SparsePoseGraphOptions::Clear();
  clear_has_sparse_pose_graph_options();
}
inline const ::cartographer::mapping::proto::SparsePoseGraphOptions& MapBuilderOptions::sparse_pose_graph_options() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.MapBuilderOptions.sparse_pose_graph_options)
  return sparse_pose_graph_options_ != NULL ? *sparse_pose_graph_options_ : *default_instance_->sparse_pose_graph_options_;
}
inline ::cartographer::mapping::proto::SparsePoseGraphOptions* MapBuilderOptions::mutable_sparse_pose_graph_options() {
  set_has_sparse_pose_graph_options();
  if (sparse_pose_graph_options_ == NULL) sparse_pose_graph_options_ = new ::cartographer::mapping::proto::SparsePoseGraphOptions;
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.MapBuilderOptions.sparse_pose_graph_options)
  return sparse_pose_graph_options_;
}
inline ::cartographer::mapping::proto::SparsePoseGraphOptions* MapBuilderOptions::release_sparse_pose_graph_options() {
  clear_has_sparse_pose_graph_options();
  ::cartographer::mapping::proto::SparsePoseGraphOptions* temp = sparse_pose_graph_options_;
  sparse_pose_graph_options_ = NULL;
  return temp;
}
inline void MapBuilderOptions::set_allocated_sparse_pose_graph_options(::cartographer::mapping::proto::SparsePoseGraphOptions* sparse_pose_graph_options) {
  delete sparse_pose_graph_options_;
  sparse_pose_graph_options_ = sparse_pose_graph_options;
  if (sparse_pose_graph_options) {
    set_has_sparse_pose_graph_options();
  } else {
    clear_has_sparse_pose_graph_options();
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.MapBuilderOptions.sparse_pose_graph_options)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_2fproto_2fmap_5fbuilder_5foptions_2eproto__INCLUDED
