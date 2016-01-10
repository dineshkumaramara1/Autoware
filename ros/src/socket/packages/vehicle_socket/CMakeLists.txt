cmake_minimum_required(VERSION 2.8.3)
project(vehicle_socket)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  message_generation
  tablet_socket_msgs
  vehicle_socket_msgs
)

set(CMAKE_CXX_FLAGS "-std=c++11 -O2 -Wall ${CMAKE_CXX_FLAGS}")



generate_messages(
  DEPENDENCIES
  std_msgs
)

catkin_package(
)

add_executable(vehicle_receiver nodes/vehicle_receiver/vehicle_receiver.cpp)
target_link_libraries(vehicle_receiver ${catkin_LIBRARIES})


add_executable(vehicle_sender nodes/vehicle_sender/vehicle_sender.cpp)
target_link_libraries(vehicle_sender ${catkin_LIBRARIES})
