// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: enums.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_enums_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_enums_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_enums_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_enums_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_enums_2eproto;
namespace gtxilib {
namespace oopclasses {
namespace protos {
class ElementType;
class ElementTypeDefaultTypeInternal;
extern ElementTypeDefaultTypeInternal _ElementType_default_instance_;
}  // namespace protos
}  // namespace oopclasses
}  // namespace gtxilib
PROTOBUF_NAMESPACE_OPEN
template<> ::gtxilib::oopclasses::protos::ElementType* Arena::CreateMaybeMessage<::gtxilib::oopclasses::protos::ElementType>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gtxilib {
namespace oopclasses {
namespace protos {

enum ElementType_ElementTypeEnum : int {
  ElementType_ElementTypeEnum_ANY = 0,
  ElementType_ElementTypeEnum_OTHER = 1,
  ElementType_ElementTypeEnum_APPLICATION = 2,
  ElementType_ElementTypeEnum_GROUP = 3,
  ElementType_ElementTypeEnum_WINDOW = 4,
  ElementType_ElementTypeEnum_SHEET = 5,
  ElementType_ElementTypeEnum_DRAWER = 6,
  ElementType_ElementTypeEnum_ALERT = 7,
  ElementType_ElementTypeEnum_DIALOG = 8,
  ElementType_ElementTypeEnum_BUTTON = 9,
  ElementType_ElementTypeEnum_RADIO_BUTTON = 10,
  ElementType_ElementTypeEnum_RADIO_GROUP = 11,
  ElementType_ElementTypeEnum_CHECK_BOX = 12,
  ElementType_ElementTypeEnum_DISCLOSURE_TRIANGLE = 13,
  ElementType_ElementTypeEnum_POP_UP_BUTTON = 14,
  ElementType_ElementTypeEnum_COMBO_BOX = 15,
  ElementType_ElementTypeEnum_MENU_BUTTON = 16,
  ElementType_ElementTypeEnum_TOOLBAR_BUTTON = 17,
  ElementType_ElementTypeEnum_POPOVER = 18,
  ElementType_ElementTypeEnum_KEYBOARD = 19,
  ElementType_ElementTypeEnum_KEY = 20,
  ElementType_ElementTypeEnum_NAVIGATION_BAR = 21,
  ElementType_ElementTypeEnum_TAB_BAR = 22,
  ElementType_ElementTypeEnum_TAB_GROUP = 23,
  ElementType_ElementTypeEnum_TOOLBAR = 24,
  ElementType_ElementTypeEnum_STATUS_BAR = 25,
  ElementType_ElementTypeEnum_TABLE = 26,
  ElementType_ElementTypeEnum_TABLE_ROW = 27,
  ElementType_ElementTypeEnum_TABLE_COLUMN = 28,
  ElementType_ElementTypeEnum_OUTLINE = 29,
  ElementType_ElementTypeEnum_OUTLINE_ROW = 30,
  ElementType_ElementTypeEnum_BROWSER = 31,
  ElementType_ElementTypeEnum_COLLECTION_VIEW = 32,
  ElementType_ElementTypeEnum_SLIDER = 33,
  ElementType_ElementTypeEnum_PAGE_INDICATOR = 34,
  ElementType_ElementTypeEnum_PROGRESS_INDICATOR = 35,
  ElementType_ElementTypeEnum_ACTIVITY_INDICATOR = 36,
  ElementType_ElementTypeEnum_SEGMENTED_CONTROL = 37,
  ElementType_ElementTypeEnum_PICKER = 38,
  ElementType_ElementTypeEnum_PICKER_WHEEL = 39,
  ElementType_ElementTypeEnum_SWITCH = 40,
  ElementType_ElementTypeEnum_TOGGLE = 41,
  ElementType_ElementTypeEnum_LINK = 42,
  ElementType_ElementTypeEnum_IMAGE = 43,
  ElementType_ElementTypeEnum_ICON = 44,
  ElementType_ElementTypeEnum_SEARCH_FIELD = 45,
  ElementType_ElementTypeEnum_SCROLL_VIEW = 46,
  ElementType_ElementTypeEnum_SCROLL_BAR = 47,
  ElementType_ElementTypeEnum_STATIC_TEXT = 48,
  ElementType_ElementTypeEnum_TEXT_FIELD = 49,
  ElementType_ElementTypeEnum_SECURE_TEXT_FIELD = 50,
  ElementType_ElementTypeEnum_DATE_PICKER = 51,
  ElementType_ElementTypeEnum_TEXT_VIEW = 52,
  ElementType_ElementTypeEnum_MENU = 53,
  ElementType_ElementTypeEnum_MENU_ITEM = 54,
  ElementType_ElementTypeEnum_MENU_BAR = 55,
  ElementType_ElementTypeEnum_MENU_BAR_ITEM = 56,
  ElementType_ElementTypeEnum_MAP = 57,
  ElementType_ElementTypeEnum_WEB_VIEW = 58,
  ElementType_ElementTypeEnum_INCREMENT_ARROW = 59,
  ElementType_ElementTypeEnum_DECREMENT_ARROW = 60,
  ElementType_ElementTypeEnum_TIMELINE = 61,
  ElementType_ElementTypeEnum_RATING_INDICATOR = 62,
  ElementType_ElementTypeEnum_VALUE_INDICATOR = 63,
  ElementType_ElementTypeEnum_SPLIT_GROUP = 64,
  ElementType_ElementTypeEnum_SPLITTER = 65,
  ElementType_ElementTypeEnum_RELEVANCE_INDICATOR = 66,
  ElementType_ElementTypeEnum_COLOR_WELL = 67,
  ElementType_ElementTypeEnum_HELP_TAG = 68,
  ElementType_ElementTypeEnum_MATTE = 69,
  ElementType_ElementTypeEnum_DOCK_ITEM = 70,
  ElementType_ElementTypeEnum_RULER = 71,
  ElementType_ElementTypeEnum_RULER_MARKER = 72,
  ElementType_ElementTypeEnum_GRID = 73,
  ElementType_ElementTypeEnum_LEVEL_INDICATOR = 74,
  ElementType_ElementTypeEnum_CELL = 75,
  ElementType_ElementTypeEnum_LAYOUT_AREA = 76,
  ElementType_ElementTypeEnum_LAYOUT_ITEM = 77,
  ElementType_ElementTypeEnum_HANDLE = 78,
  ElementType_ElementTypeEnum_STEPPER = 79,
  ElementType_ElementTypeEnum_TAB = 80,
  ElementType_ElementTypeEnum_TOUCH_BAR = 81,
  ElementType_ElementTypeEnum_STATUS_ITEM = 82,
  ElementType_ElementTypeEnum_ElementType_ElementTypeEnum_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ElementType_ElementTypeEnum_ElementType_ElementTypeEnum_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ElementType_ElementTypeEnum_IsValid(int value);
constexpr ElementType_ElementTypeEnum ElementType_ElementTypeEnum_ElementTypeEnum_MIN = ElementType_ElementTypeEnum_ANY;
constexpr ElementType_ElementTypeEnum ElementType_ElementTypeEnum_ElementTypeEnum_MAX = ElementType_ElementTypeEnum_STATUS_ITEM;
constexpr int ElementType_ElementTypeEnum_ElementTypeEnum_ARRAYSIZE = ElementType_ElementTypeEnum_ElementTypeEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ElementType_ElementTypeEnum_descriptor();
template<typename T>
inline const std::string& ElementType_ElementTypeEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ElementType_ElementTypeEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ElementType_ElementTypeEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ElementType_ElementTypeEnum_descriptor(), enum_t_value);
}
inline bool ElementType_ElementTypeEnum_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ElementType_ElementTypeEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ElementType_ElementTypeEnum>(
    ElementType_ElementTypeEnum_descriptor(), name, value);
}
enum ResultType : int {
  RESULT_TYPE_UNKNOWN = 0,
  RESULT_TYPE_ERROR = 1,
  RESULT_TYPE_WARNING = 2,
  RESULT_TYPE_INFO = 3,
  ResultType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ResultType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ResultType_IsValid(int value);
constexpr ResultType ResultType_MIN = RESULT_TYPE_UNKNOWN;
constexpr ResultType ResultType_MAX = RESULT_TYPE_INFO;
constexpr int ResultType_ARRAYSIZE = ResultType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ResultType_descriptor();
template<typename T>
inline const std::string& ResultType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ResultType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ResultType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ResultType_descriptor(), enum_t_value);
}
inline bool ResultType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ResultType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ResultType>(
    ResultType_descriptor(), name, value);
}
// ===================================================================

class ElementType PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gtxilib.oopclasses.protos.ElementType) */ {
 public:
  inline ElementType() : ElementType(nullptr) {}
  virtual ~ElementType();

  ElementType(const ElementType& from);
  ElementType(ElementType&& from) noexcept
    : ElementType() {
    *this = ::std::move(from);
  }

  inline ElementType& operator=(const ElementType& from) {
    CopyFrom(from);
    return *this;
  }
  inline ElementType& operator=(ElementType&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ElementType& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ElementType* internal_default_instance() {
    return reinterpret_cast<const ElementType*>(
               &_ElementType_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ElementType& a, ElementType& b) {
    a.Swap(&b);
  }
  inline void Swap(ElementType* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ElementType* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ElementType* New() const final {
    return CreateMaybeMessage<ElementType>(nullptr);
  }

  ElementType* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ElementType>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ElementType& from);
  void MergeFrom(const ElementType& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ElementType* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gtxilib.oopclasses.protos.ElementType";
  }
  protected:
  explicit ElementType(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_enums_2eproto);
    return ::descriptor_table_enums_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef ElementType_ElementTypeEnum ElementTypeEnum;
  static constexpr ElementTypeEnum ANY =
    ElementType_ElementTypeEnum_ANY;
  static constexpr ElementTypeEnum OTHER =
    ElementType_ElementTypeEnum_OTHER;
  static constexpr ElementTypeEnum APPLICATION =
    ElementType_ElementTypeEnum_APPLICATION;
  static constexpr ElementTypeEnum GROUP =
    ElementType_ElementTypeEnum_GROUP;
  static constexpr ElementTypeEnum WINDOW =
    ElementType_ElementTypeEnum_WINDOW;
  static constexpr ElementTypeEnum SHEET =
    ElementType_ElementTypeEnum_SHEET;
  static constexpr ElementTypeEnum DRAWER =
    ElementType_ElementTypeEnum_DRAWER;
  static constexpr ElementTypeEnum ALERT =
    ElementType_ElementTypeEnum_ALERT;
  static constexpr ElementTypeEnum DIALOG =
    ElementType_ElementTypeEnum_DIALOG;
  static constexpr ElementTypeEnum BUTTON =
    ElementType_ElementTypeEnum_BUTTON;
  static constexpr ElementTypeEnum RADIO_BUTTON =
    ElementType_ElementTypeEnum_RADIO_BUTTON;
  static constexpr ElementTypeEnum RADIO_GROUP =
    ElementType_ElementTypeEnum_RADIO_GROUP;
  static constexpr ElementTypeEnum CHECK_BOX =
    ElementType_ElementTypeEnum_CHECK_BOX;
  static constexpr ElementTypeEnum DISCLOSURE_TRIANGLE =
    ElementType_ElementTypeEnum_DISCLOSURE_TRIANGLE;
  static constexpr ElementTypeEnum POP_UP_BUTTON =
    ElementType_ElementTypeEnum_POP_UP_BUTTON;
  static constexpr ElementTypeEnum COMBO_BOX =
    ElementType_ElementTypeEnum_COMBO_BOX;
  static constexpr ElementTypeEnum MENU_BUTTON =
    ElementType_ElementTypeEnum_MENU_BUTTON;
  static constexpr ElementTypeEnum TOOLBAR_BUTTON =
    ElementType_ElementTypeEnum_TOOLBAR_BUTTON;
  static constexpr ElementTypeEnum POPOVER =
    ElementType_ElementTypeEnum_POPOVER;
  static constexpr ElementTypeEnum KEYBOARD =
    ElementType_ElementTypeEnum_KEYBOARD;
  static constexpr ElementTypeEnum KEY =
    ElementType_ElementTypeEnum_KEY;
  static constexpr ElementTypeEnum NAVIGATION_BAR =
    ElementType_ElementTypeEnum_NAVIGATION_BAR;
  static constexpr ElementTypeEnum TAB_BAR =
    ElementType_ElementTypeEnum_TAB_BAR;
  static constexpr ElementTypeEnum TAB_GROUP =
    ElementType_ElementTypeEnum_TAB_GROUP;
  static constexpr ElementTypeEnum TOOLBAR =
    ElementType_ElementTypeEnum_TOOLBAR;
  static constexpr ElementTypeEnum STATUS_BAR =
    ElementType_ElementTypeEnum_STATUS_BAR;
  static constexpr ElementTypeEnum TABLE =
    ElementType_ElementTypeEnum_TABLE;
  static constexpr ElementTypeEnum TABLE_ROW =
    ElementType_ElementTypeEnum_TABLE_ROW;
  static constexpr ElementTypeEnum TABLE_COLUMN =
    ElementType_ElementTypeEnum_TABLE_COLUMN;
  static constexpr ElementTypeEnum OUTLINE =
    ElementType_ElementTypeEnum_OUTLINE;
  static constexpr ElementTypeEnum OUTLINE_ROW =
    ElementType_ElementTypeEnum_OUTLINE_ROW;
  static constexpr ElementTypeEnum BROWSER =
    ElementType_ElementTypeEnum_BROWSER;
  static constexpr ElementTypeEnum COLLECTION_VIEW =
    ElementType_ElementTypeEnum_COLLECTION_VIEW;
  static constexpr ElementTypeEnum SLIDER =
    ElementType_ElementTypeEnum_SLIDER;
  static constexpr ElementTypeEnum PAGE_INDICATOR =
    ElementType_ElementTypeEnum_PAGE_INDICATOR;
  static constexpr ElementTypeEnum PROGRESS_INDICATOR =
    ElementType_ElementTypeEnum_PROGRESS_INDICATOR;
  static constexpr ElementTypeEnum ACTIVITY_INDICATOR =
    ElementType_ElementTypeEnum_ACTIVITY_INDICATOR;
  static constexpr ElementTypeEnum SEGMENTED_CONTROL =
    ElementType_ElementTypeEnum_SEGMENTED_CONTROL;
  static constexpr ElementTypeEnum PICKER =
    ElementType_ElementTypeEnum_PICKER;
  static constexpr ElementTypeEnum PICKER_WHEEL =
    ElementType_ElementTypeEnum_PICKER_WHEEL;
  static constexpr ElementTypeEnum SWITCH =
    ElementType_ElementTypeEnum_SWITCH;
  static constexpr ElementTypeEnum TOGGLE =
    ElementType_ElementTypeEnum_TOGGLE;
  static constexpr ElementTypeEnum LINK =
    ElementType_ElementTypeEnum_LINK;
  static constexpr ElementTypeEnum IMAGE =
    ElementType_ElementTypeEnum_IMAGE;
  static constexpr ElementTypeEnum ICON =
    ElementType_ElementTypeEnum_ICON;
  static constexpr ElementTypeEnum SEARCH_FIELD =
    ElementType_ElementTypeEnum_SEARCH_FIELD;
  static constexpr ElementTypeEnum SCROLL_VIEW =
    ElementType_ElementTypeEnum_SCROLL_VIEW;
  static constexpr ElementTypeEnum SCROLL_BAR =
    ElementType_ElementTypeEnum_SCROLL_BAR;
  static constexpr ElementTypeEnum STATIC_TEXT =
    ElementType_ElementTypeEnum_STATIC_TEXT;
  static constexpr ElementTypeEnum TEXT_FIELD =
    ElementType_ElementTypeEnum_TEXT_FIELD;
  static constexpr ElementTypeEnum SECURE_TEXT_FIELD =
    ElementType_ElementTypeEnum_SECURE_TEXT_FIELD;
  static constexpr ElementTypeEnum DATE_PICKER =
    ElementType_ElementTypeEnum_DATE_PICKER;
  static constexpr ElementTypeEnum TEXT_VIEW =
    ElementType_ElementTypeEnum_TEXT_VIEW;
  static constexpr ElementTypeEnum MENU =
    ElementType_ElementTypeEnum_MENU;
  static constexpr ElementTypeEnum MENU_ITEM =
    ElementType_ElementTypeEnum_MENU_ITEM;
  static constexpr ElementTypeEnum MENU_BAR =
    ElementType_ElementTypeEnum_MENU_BAR;
  static constexpr ElementTypeEnum MENU_BAR_ITEM =
    ElementType_ElementTypeEnum_MENU_BAR_ITEM;
  static constexpr ElementTypeEnum MAP =
    ElementType_ElementTypeEnum_MAP;
  static constexpr ElementTypeEnum WEB_VIEW =
    ElementType_ElementTypeEnum_WEB_VIEW;
  static constexpr ElementTypeEnum INCREMENT_ARROW =
    ElementType_ElementTypeEnum_INCREMENT_ARROW;
  static constexpr ElementTypeEnum DECREMENT_ARROW =
    ElementType_ElementTypeEnum_DECREMENT_ARROW;
  static constexpr ElementTypeEnum TIMELINE =
    ElementType_ElementTypeEnum_TIMELINE;
  static constexpr ElementTypeEnum RATING_INDICATOR =
    ElementType_ElementTypeEnum_RATING_INDICATOR;
  static constexpr ElementTypeEnum VALUE_INDICATOR =
    ElementType_ElementTypeEnum_VALUE_INDICATOR;
  static constexpr ElementTypeEnum SPLIT_GROUP =
    ElementType_ElementTypeEnum_SPLIT_GROUP;
  static constexpr ElementTypeEnum SPLITTER =
    ElementType_ElementTypeEnum_SPLITTER;
  static constexpr ElementTypeEnum RELEVANCE_INDICATOR =
    ElementType_ElementTypeEnum_RELEVANCE_INDICATOR;
  static constexpr ElementTypeEnum COLOR_WELL =
    ElementType_ElementTypeEnum_COLOR_WELL;
  static constexpr ElementTypeEnum HELP_TAG =
    ElementType_ElementTypeEnum_HELP_TAG;
  static constexpr ElementTypeEnum MATTE =
    ElementType_ElementTypeEnum_MATTE;
  static constexpr ElementTypeEnum DOCK_ITEM =
    ElementType_ElementTypeEnum_DOCK_ITEM;
  static constexpr ElementTypeEnum RULER =
    ElementType_ElementTypeEnum_RULER;
  static constexpr ElementTypeEnum RULER_MARKER =
    ElementType_ElementTypeEnum_RULER_MARKER;
  static constexpr ElementTypeEnum GRID =
    ElementType_ElementTypeEnum_GRID;
  static constexpr ElementTypeEnum LEVEL_INDICATOR =
    ElementType_ElementTypeEnum_LEVEL_INDICATOR;
  static constexpr ElementTypeEnum CELL =
    ElementType_ElementTypeEnum_CELL;
  static constexpr ElementTypeEnum LAYOUT_AREA =
    ElementType_ElementTypeEnum_LAYOUT_AREA;
  static constexpr ElementTypeEnum LAYOUT_ITEM =
    ElementType_ElementTypeEnum_LAYOUT_ITEM;
  static constexpr ElementTypeEnum HANDLE =
    ElementType_ElementTypeEnum_HANDLE;
  static constexpr ElementTypeEnum STEPPER =
    ElementType_ElementTypeEnum_STEPPER;
  static constexpr ElementTypeEnum TAB =
    ElementType_ElementTypeEnum_TAB;
  static constexpr ElementTypeEnum TOUCH_BAR =
    ElementType_ElementTypeEnum_TOUCH_BAR;
  static constexpr ElementTypeEnum STATUS_ITEM =
    ElementType_ElementTypeEnum_STATUS_ITEM;
  static inline bool ElementTypeEnum_IsValid(int value) {
    return ElementType_ElementTypeEnum_IsValid(value);
  }
  static constexpr ElementTypeEnum ElementTypeEnum_MIN =
    ElementType_ElementTypeEnum_ElementTypeEnum_MIN;
  static constexpr ElementTypeEnum ElementTypeEnum_MAX =
    ElementType_ElementTypeEnum_ElementTypeEnum_MAX;
  static constexpr int ElementTypeEnum_ARRAYSIZE =
    ElementType_ElementTypeEnum_ElementTypeEnum_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  ElementTypeEnum_descriptor() {
    return ElementType_ElementTypeEnum_descriptor();
  }
  template<typename T>
  static inline const std::string& ElementTypeEnum_Name(T enum_t_value) {
    static_assert(::std::is_same<T, ElementTypeEnum>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function ElementTypeEnum_Name.");
    return ElementType_ElementTypeEnum_Name(enum_t_value);
  }
  static inline bool ElementTypeEnum_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      ElementTypeEnum* value) {
    return ElementType_ElementTypeEnum_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:gtxilib.oopclasses.protos.ElementType)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_enums_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ElementType

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace oopclasses
}  // namespace gtxilib

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::gtxilib::oopclasses::protos::ElementType_ElementTypeEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gtxilib::oopclasses::protos::ElementType_ElementTypeEnum>() {
  return ::gtxilib::oopclasses::protos::ElementType_ElementTypeEnum_descriptor();
}
template <> struct is_proto_enum< ::gtxilib::oopclasses::protos::ResultType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gtxilib::oopclasses::protos::ResultType>() {
  return ::gtxilib::oopclasses::protos::ResultType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_enums_2eproto
