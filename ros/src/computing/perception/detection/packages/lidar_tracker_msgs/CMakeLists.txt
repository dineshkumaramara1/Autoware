cmake_minimum_required(VERSION 2.8.3)
project(lidar_tracker_msgs)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  sensor_msgs
  message_generation
)

## Generate messages in the 'msg' folder
 add_message_files(
   FILES
   centroids.msg
 )

## Generate added messages and services with any dependencies listed here
 generate_messages(
   DEPENDENCIES
   std_msgs 
   geometry_msgs
 )
 
catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES lidar_tracker
#  CATKIN_DEPENDS pcl_conversions pcl_ros roscpp sensor_msgs
#  DEPENDS system_lib
DEPENDS lidar_tracker_msgs_generate_messages_cpp
)

#lidar_tracker_msgs_generate_messages_cpp
