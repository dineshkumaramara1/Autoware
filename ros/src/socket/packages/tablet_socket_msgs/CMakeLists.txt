cmake_minimum_required(VERSION 2.8.3)
project(tablet_socket_msgs)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  message_generation
)


add_message_files(
  FILES
  Waypoint.msg
  gear_cmd.msg
  mode_cmd.msg
  route_cmd.msg
  error_info.msg
  mode_info.msg
)

generate_messages(
  DEPENDENCIES
  std_msgs
)

catkin_package(

  DEPENDS tablet_socket_msgs_generate_messages_cpp
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)
