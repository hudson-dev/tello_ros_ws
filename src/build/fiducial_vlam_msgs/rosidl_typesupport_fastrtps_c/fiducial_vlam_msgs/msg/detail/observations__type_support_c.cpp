// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fiducial_vlam_msgs:msg/Observations.idl
// generated code does not contain a copyright notice
#include "fiducial_vlam_msgs/msg/detail/observations__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fiducial_vlam_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fiducial_vlam_msgs/msg/detail/observations__struct.h"
#include "fiducial_vlam_msgs/msg/detail/observations__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "fiducial_vlam_msgs/msg/detail/observation__functions.h"  // observations
#include "sensor_msgs/msg/detail/camera_info__functions.h"  // camera_info
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_fiducial_vlam_msgs__msg__Observation(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_fiducial_vlam_msgs__msg__Observation(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fiducial_vlam_msgs, msg, Observation)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fiducial_vlam_msgs
size_t get_serialized_size_sensor_msgs__msg__CameraInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fiducial_vlam_msgs
size_t max_serialized_size_sensor_msgs__msg__CameraInfo(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fiducial_vlam_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, CameraInfo)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fiducial_vlam_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fiducial_vlam_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fiducial_vlam_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _Observations__ros_msg_type = fiducial_vlam_msgs__msg__Observations;

static bool _Observations__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Observations__ros_msg_type * ros_message = static_cast<const _Observations__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: camera_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, CameraInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->camera_info, cdr))
    {
      return false;
    }
  }

  // Field name: observations
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fiducial_vlam_msgs, msg, Observation
      )()->data);
    size_t size = ros_message->observations.size;
    auto array_ptr = ros_message->observations.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _Observations__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Observations__ros_msg_type * ros_message = static_cast<_Observations__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: camera_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, CameraInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->camera_info))
    {
      return false;
    }
  }

  // Field name: observations
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fiducial_vlam_msgs, msg, Observation
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->observations.data) {
      fiducial_vlam_msgs__msg__Observation__Sequence__fini(&ros_message->observations);
    }
    if (!fiducial_vlam_msgs__msg__Observation__Sequence__init(&ros_message->observations, size)) {
      return "failed to create array for field 'observations'";
    }
    auto array_ptr = ros_message->observations.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fiducial_vlam_msgs
size_t get_serialized_size_fiducial_vlam_msgs__msg__Observations(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Observations__ros_msg_type * ros_message = static_cast<const _Observations__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name camera_info

  current_alignment += get_serialized_size_sensor_msgs__msg__CameraInfo(
    &(ros_message->camera_info), current_alignment);
  // field.name observations
  {
    size_t array_size = ros_message->observations.size;
    auto array_ptr = ros_message->observations.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_fiducial_vlam_msgs__msg__Observation(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Observations__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fiducial_vlam_msgs__msg__Observations(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fiducial_vlam_msgs
size_t max_serialized_size_fiducial_vlam_msgs__msg__Observations(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: camera_info
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__CameraInfo(
        full_bounded, current_alignment);
    }
  }
  // member: observations
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_fiducial_vlam_msgs__msg__Observation(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Observations__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_fiducial_vlam_msgs__msg__Observations(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Observations = {
  "fiducial_vlam_msgs::msg",
  "Observations",
  _Observations__cdr_serialize,
  _Observations__cdr_deserialize,
  _Observations__get_serialized_size,
  _Observations__max_serialized_size
};

static rosidl_message_type_support_t _Observations__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Observations,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fiducial_vlam_msgs, msg, Observations)() {
  return &_Observations__type_support;
}

#if defined(__cplusplus)
}
#endif
