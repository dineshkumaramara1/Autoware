cmake_minimum_required(VERSION 2.8.3)
project(vehicle_socket_msgs)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  message_generation
)

set(CMAKE_CXX_FLAGS "-std=c++11 -O2 -Wall ${CMAKE_CXX_FLAGS}")

add_message_files(
  FILES
  CanInfo.msg
)

generate_messages(
  DEPENDENCIES
  std_msgs
)

catkin_package(
  DEPENDS vehicle_socket_msgs_generate_messages_cpp
)
