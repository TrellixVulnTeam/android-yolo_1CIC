// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/queue_runner.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "tensorflow/core/protobuf/queue_runner.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace tensorflow {

namespace {

const ::google::protobuf::Descriptor* QueueRunnerDef_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  QueueRunnerDef_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto() {
  protobuf_AddDesc_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "tensorflow/core/protobuf/queue_runner.proto");
  GOOGLE_CHECK(file != NULL);
  QueueRunnerDef_descriptor_ = file->message_type(0);
  static const int QueueRunnerDef_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QueueRunnerDef, queue_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QueueRunnerDef, enqueue_op_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QueueRunnerDef, close_op_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QueueRunnerDef, cancel_op_name_),
  };
  QueueRunnerDef_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      QueueRunnerDef_descriptor_,
      QueueRunnerDef::default_instance_,
      QueueRunnerDef_offsets_,
      -1,
      -1,
      -1,
      sizeof(QueueRunnerDef),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QueueRunnerDef, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QueueRunnerDef, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      QueueRunnerDef_descriptor_, &QueueRunnerDef::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto() {
  delete QueueRunnerDef::default_instance_;
  delete QueueRunnerDef_reflection_;
}

void protobuf_AddDesc_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n+tensorflow/core/protobuf/queue_runner."
    "proto\022\ntensorflow\"l\n\016QueueRunnerDef\022\022\n\nq"
    "ueue_name\030\001 \001(\t\022\027\n\017enqueue_op_name\030\002 \003(\t"
    "\022\025\n\rclose_op_name\030\003 \001(\t\022\026\n\016cancel_op_nam"
    "e\030\004 \001(\tB2\n\030org.tensorflow.frameworkB\021Que"
    "ueRunnerProtosP\001\370\001\001b\006proto3", 227);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/protobuf/queue_runner.proto", &protobuf_RegisterTypes);
  QueueRunnerDef::default_instance_ = new QueueRunnerDef();
  QueueRunnerDef::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto {
  StaticDescriptorInitializer_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto() {
    protobuf_AddDesc_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto();
  }
} static_descriptor_initializer_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int QueueRunnerDef::kQueueNameFieldNumber;
const int QueueRunnerDef::kEnqueueOpNameFieldNumber;
const int QueueRunnerDef::kCloseOpNameFieldNumber;
const int QueueRunnerDef::kCancelOpNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

QueueRunnerDef::QueueRunnerDef()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.QueueRunnerDef)
}

QueueRunnerDef::QueueRunnerDef(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena),
  enqueue_op_name_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.QueueRunnerDef)
}

void QueueRunnerDef::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

QueueRunnerDef::QueueRunnerDef(const QueueRunnerDef& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:tensorflow.QueueRunnerDef)
}

void QueueRunnerDef::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  queue_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  close_op_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  cancel_op_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

QueueRunnerDef::~QueueRunnerDef() {
  // @@protoc_insertion_point(destructor:tensorflow.QueueRunnerDef)
  SharedDtor();
}

void QueueRunnerDef::SharedDtor() {
  if (GetArenaNoVirtual() != NULL) {
    return;
  }

  queue_name_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  close_op_name_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  cancel_op_name_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  if (this != default_instance_) {
  }
}

void QueueRunnerDef::ArenaDtor(void* object) {
  QueueRunnerDef* _this = reinterpret_cast< QueueRunnerDef* >(object);
  (void)_this;
}
void QueueRunnerDef::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void QueueRunnerDef::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* QueueRunnerDef::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return QueueRunnerDef_descriptor_;
}

const QueueRunnerDef& QueueRunnerDef::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto();
  return *default_instance_;
}

QueueRunnerDef* QueueRunnerDef::default_instance_ = NULL;

QueueRunnerDef* QueueRunnerDef::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<QueueRunnerDef>(arena);
}

void QueueRunnerDef::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.QueueRunnerDef)
  queue_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  close_op_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  cancel_op_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  enqueue_op_name_.Clear();
}

bool QueueRunnerDef::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.QueueRunnerDef)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string queue_name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_queue_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->queue_name().data(), this->queue_name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.QueueRunnerDef.queue_name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_enqueue_op_name;
        break;
      }

      // repeated string enqueue_op_name = 2;
      case 2: {
        if (tag == 18) {
         parse_enqueue_op_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_enqueue_op_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->enqueue_op_name(this->enqueue_op_name_size() - 1).data(),
            this->enqueue_op_name(this->enqueue_op_name_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.QueueRunnerDef.enqueue_op_name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_enqueue_op_name;
        if (input->ExpectTag(26)) goto parse_close_op_name;
        break;
      }

      // optional string close_op_name = 3;
      case 3: {
        if (tag == 26) {
         parse_close_op_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_close_op_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->close_op_name().data(), this->close_op_name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.QueueRunnerDef.close_op_name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_cancel_op_name;
        break;
      }

      // optional string cancel_op_name = 4;
      case 4: {
        if (tag == 34) {
         parse_cancel_op_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_cancel_op_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->cancel_op_name().data(), this->cancel_op_name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.QueueRunnerDef.cancel_op_name"));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tensorflow.QueueRunnerDef)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.QueueRunnerDef)
  return false;
#undef DO_
}

void QueueRunnerDef::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.QueueRunnerDef)
  // optional string queue_name = 1;
  if (this->queue_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->queue_name().data(), this->queue_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.QueueRunnerDef.queue_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->queue_name(), output);
  }

  // repeated string enqueue_op_name = 2;
  for (int i = 0; i < this->enqueue_op_name_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->enqueue_op_name(i).data(), this->enqueue_op_name(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.QueueRunnerDef.enqueue_op_name");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->enqueue_op_name(i), output);
  }

  // optional string close_op_name = 3;
  if (this->close_op_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->close_op_name().data(), this->close_op_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.QueueRunnerDef.close_op_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->close_op_name(), output);
  }

  // optional string cancel_op_name = 4;
  if (this->cancel_op_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->cancel_op_name().data(), this->cancel_op_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.QueueRunnerDef.cancel_op_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->cancel_op_name(), output);
  }

  // @@protoc_insertion_point(serialize_end:tensorflow.QueueRunnerDef)
}

::google::protobuf::uint8* QueueRunnerDef::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.QueueRunnerDef)
  // optional string queue_name = 1;
  if (this->queue_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->queue_name().data(), this->queue_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.QueueRunnerDef.queue_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->queue_name(), target);
  }

  // repeated string enqueue_op_name = 2;
  for (int i = 0; i < this->enqueue_op_name_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->enqueue_op_name(i).data(), this->enqueue_op_name(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.QueueRunnerDef.enqueue_op_name");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->enqueue_op_name(i), target);
  }

  // optional string close_op_name = 3;
  if (this->close_op_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->close_op_name().data(), this->close_op_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.QueueRunnerDef.close_op_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->close_op_name(), target);
  }

  // optional string cancel_op_name = 4;
  if (this->cancel_op_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->cancel_op_name().data(), this->cancel_op_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.QueueRunnerDef.cancel_op_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->cancel_op_name(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.QueueRunnerDef)
  return target;
}

int QueueRunnerDef::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.QueueRunnerDef)
  int total_size = 0;

  // optional string queue_name = 1;
  if (this->queue_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->queue_name());
  }

  // optional string close_op_name = 3;
  if (this->close_op_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->close_op_name());
  }

  // optional string cancel_op_name = 4;
  if (this->cancel_op_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->cancel_op_name());
  }

  // repeated string enqueue_op_name = 2;
  total_size += 1 * this->enqueue_op_name_size();
  for (int i = 0; i < this->enqueue_op_name_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->enqueue_op_name(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void QueueRunnerDef::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.QueueRunnerDef)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const QueueRunnerDef* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const QueueRunnerDef>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.QueueRunnerDef)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.QueueRunnerDef)
    MergeFrom(*source);
  }
}

void QueueRunnerDef::MergeFrom(const QueueRunnerDef& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.QueueRunnerDef)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  enqueue_op_name_.MergeFrom(from.enqueue_op_name_);
  if (from.queue_name().size() > 0) {
    set_queue_name(from.queue_name());
  }
  if (from.close_op_name().size() > 0) {
    set_close_op_name(from.close_op_name());
  }
  if (from.cancel_op_name().size() > 0) {
    set_cancel_op_name(from.cancel_op_name());
  }
}

void QueueRunnerDef::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.QueueRunnerDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void QueueRunnerDef::CopyFrom(const QueueRunnerDef& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.QueueRunnerDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QueueRunnerDef::IsInitialized() const {

  return true;
}

void QueueRunnerDef::Swap(QueueRunnerDef* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    QueueRunnerDef temp;
    temp.MergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void QueueRunnerDef::UnsafeArenaSwap(QueueRunnerDef* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void QueueRunnerDef::InternalSwap(QueueRunnerDef* other) {
  queue_name_.Swap(&other->queue_name_);
  enqueue_op_name_.UnsafeArenaSwap(&other->enqueue_op_name_);
  close_op_name_.Swap(&other->close_op_name_);
  cancel_op_name_.Swap(&other->cancel_op_name_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata QueueRunnerDef::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = QueueRunnerDef_descriptor_;
  metadata.reflection = QueueRunnerDef_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// QueueRunnerDef

// optional string queue_name = 1;
void QueueRunnerDef::clear_queue_name() {
  queue_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
 const ::std::string& QueueRunnerDef::queue_name() const {
  // @@protoc_insertion_point(field_get:tensorflow.QueueRunnerDef.queue_name)
  return queue_name_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void QueueRunnerDef::set_queue_name(const ::std::string& value) {
  
  queue_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.QueueRunnerDef.queue_name)
}
 void QueueRunnerDef::set_queue_name(const char* value) {
  
  queue_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.QueueRunnerDef.queue_name)
}
 void QueueRunnerDef::set_queue_name(const char* value,
    size_t size) {
  
  queue_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.QueueRunnerDef.queue_name)
}
 ::std::string* QueueRunnerDef::mutable_queue_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.QueueRunnerDef.queue_name)
  return queue_name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
 ::std::string* QueueRunnerDef::release_queue_name() {
  // @@protoc_insertion_point(field_release:tensorflow.QueueRunnerDef.queue_name)
  
  return queue_name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
 ::std::string* QueueRunnerDef::unsafe_arena_release_queue_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.QueueRunnerDef.queue_name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return queue_name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
 void QueueRunnerDef::set_allocated_queue_name(::std::string* queue_name) {
  if (queue_name != NULL) {
    
  } else {
    
  }
  queue_name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), queue_name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.QueueRunnerDef.queue_name)
}
 void QueueRunnerDef::unsafe_arena_set_allocated_queue_name(
    ::std::string* queue_name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (queue_name != NULL) {
    
  } else {
    
  }
  queue_name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      queue_name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.QueueRunnerDef.queue_name)
}

// repeated string enqueue_op_name = 2;
int QueueRunnerDef::enqueue_op_name_size() const {
  return enqueue_op_name_.size();
}
void QueueRunnerDef::clear_enqueue_op_name() {
  enqueue_op_name_.Clear();
}
 const ::std::string& QueueRunnerDef::enqueue_op_name(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.QueueRunnerDef.enqueue_op_name)
  return enqueue_op_name_.Get(index);
}
 ::std::string* QueueRunnerDef::mutable_enqueue_op_name(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.QueueRunnerDef.enqueue_op_name)
  return enqueue_op_name_.Mutable(index);
}
 void QueueRunnerDef::set_enqueue_op_name(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:tensorflow.QueueRunnerDef.enqueue_op_name)
  enqueue_op_name_.Mutable(index)->assign(value);
}
 void QueueRunnerDef::set_enqueue_op_name(int index, const char* value) {
  enqueue_op_name_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:tensorflow.QueueRunnerDef.enqueue_op_name)
}
 void QueueRunnerDef::set_enqueue_op_name(int index, const char* value, size_t size) {
  enqueue_op_name_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:tensorflow.QueueRunnerDef.enqueue_op_name)
}
 ::std::string* QueueRunnerDef::add_enqueue_op_name() {
  // @@protoc_insertion_point(field_add_mutable:tensorflow.QueueRunnerDef.enqueue_op_name)
  return enqueue_op_name_.Add();
}
 void QueueRunnerDef::add_enqueue_op_name(const ::std::string& value) {
  enqueue_op_name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:tensorflow.QueueRunnerDef.enqueue_op_name)
}
 void QueueRunnerDef::add_enqueue_op_name(const char* value) {
  enqueue_op_name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:tensorflow.QueueRunnerDef.enqueue_op_name)
}
 void QueueRunnerDef::add_enqueue_op_name(const char* value, size_t size) {
  enqueue_op_name_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:tensorflow.QueueRunnerDef.enqueue_op_name)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
QueueRunnerDef::enqueue_op_name() const {
  // @@protoc_insertion_point(field_list:tensorflow.QueueRunnerDef.enqueue_op_name)
  return enqueue_op_name_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
QueueRunnerDef::mutable_enqueue_op_name() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.QueueRunnerDef.enqueue_op_name)
  return &enqueue_op_name_;
}

// optional string close_op_name = 3;
void QueueRunnerDef::clear_close_op_name() {
  close_op_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
 const ::std::string& QueueRunnerDef::close_op_name() const {
  // @@protoc_insertion_point(field_get:tensorflow.QueueRunnerDef.close_op_name)
  return close_op_name_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void QueueRunnerDef::set_close_op_name(const ::std::string& value) {
  
  close_op_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.QueueRunnerDef.close_op_name)
}
 void QueueRunnerDef::set_close_op_name(const char* value) {
  
  close_op_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.QueueRunnerDef.close_op_name)
}
 void QueueRunnerDef::set_close_op_name(const char* value,
    size_t size) {
  
  close_op_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.QueueRunnerDef.close_op_name)
}
 ::std::string* QueueRunnerDef::mutable_close_op_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.QueueRunnerDef.close_op_name)
  return close_op_name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
 ::std::string* QueueRunnerDef::release_close_op_name() {
  // @@protoc_insertion_point(field_release:tensorflow.QueueRunnerDef.close_op_name)
  
  return close_op_name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
 ::std::string* QueueRunnerDef::unsafe_arena_release_close_op_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.QueueRunnerDef.close_op_name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return close_op_name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
 void QueueRunnerDef::set_allocated_close_op_name(::std::string* close_op_name) {
  if (close_op_name != NULL) {
    
  } else {
    
  }
  close_op_name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), close_op_name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.QueueRunnerDef.close_op_name)
}
 void QueueRunnerDef::unsafe_arena_set_allocated_close_op_name(
    ::std::string* close_op_name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (close_op_name != NULL) {
    
  } else {
    
  }
  close_op_name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      close_op_name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.QueueRunnerDef.close_op_name)
}

// optional string cancel_op_name = 4;
void QueueRunnerDef::clear_cancel_op_name() {
  cancel_op_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
 const ::std::string& QueueRunnerDef::cancel_op_name() const {
  // @@protoc_insertion_point(field_get:tensorflow.QueueRunnerDef.cancel_op_name)
  return cancel_op_name_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void QueueRunnerDef::set_cancel_op_name(const ::std::string& value) {
  
  cancel_op_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.QueueRunnerDef.cancel_op_name)
}
 void QueueRunnerDef::set_cancel_op_name(const char* value) {
  
  cancel_op_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.QueueRunnerDef.cancel_op_name)
}
 void QueueRunnerDef::set_cancel_op_name(const char* value,
    size_t size) {
  
  cancel_op_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.QueueRunnerDef.cancel_op_name)
}
 ::std::string* QueueRunnerDef::mutable_cancel_op_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.QueueRunnerDef.cancel_op_name)
  return cancel_op_name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
 ::std::string* QueueRunnerDef::release_cancel_op_name() {
  // @@protoc_insertion_point(field_release:tensorflow.QueueRunnerDef.cancel_op_name)
  
  return cancel_op_name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
 ::std::string* QueueRunnerDef::unsafe_arena_release_cancel_op_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.QueueRunnerDef.cancel_op_name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return cancel_op_name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
 void QueueRunnerDef::set_allocated_cancel_op_name(::std::string* cancel_op_name) {
  if (cancel_op_name != NULL) {
    
  } else {
    
  }
  cancel_op_name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), cancel_op_name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.QueueRunnerDef.cancel_op_name)
}
 void QueueRunnerDef::unsafe_arena_set_allocated_cancel_op_name(
    ::std::string* cancel_op_name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (cancel_op_name != NULL) {
    
  } else {
    
  }
  cancel_op_name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      cancel_op_name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.QueueRunnerDef.cancel_op_name)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)
