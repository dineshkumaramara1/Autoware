cmake_minimum_required(VERSION 2.8.3)
project(cv_tracker_msgs)


FIND_PACKAGE(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  geometry_msgs
  message_generation
)

add_message_files(
  FILES
  image_obj.msg
  image_obj_ranged.msg
  image_obj_tracked.msg
  image_rect.msg
  image_rect_ranged.msg
  obj_label.msg
)

generate_messages(
  DEPENDENCIES
  std_msgs
  geometry_msgs
)

catkin_package(
  DEPENDS cv_tracker_msgs_generate_messages_cpp
)


