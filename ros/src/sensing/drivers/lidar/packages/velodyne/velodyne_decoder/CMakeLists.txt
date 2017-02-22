cmake_minimum_required(VERSION 2.8.3)
project(velodyne_decoder)

add_definitions(-std=c++0x)

find_package(catkin REQUIRED COMPONENTS
  nodelet
  roscpp
  pluginlib
  sensor_msgs
  pcl_ros
  pcl_conversions
  velodyne_msgs
)
find_package(Boost REQUIRED)


catkin_package(
  INCLUDE_DIRS include
#  LIBRARIES velodyne_decoder
  CATKIN_DEPENDS
    roscpp nodelet sensor_msgs pluginlib
    pcl_ros pcl_conversions
    velodyne_msgs
  DEPENDS
    boost
)

include_directories(
  include
  ${Boost_INCLUDE_DIR}
  ${catkin_INCLUDE_DIRS}
)

link_directories(
  ${catkin_LIBRARY_DIRS}
)

# Velodyne Decoder
add_library(velodyne_decoder
  src/velodyne_decoder.cpp
)
target_link_libraries(velodyne_decoder
  ${catkin_LIBRARIES}
)
add_dependencies(velodyne_decoder
  ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS}
)

# Velodyne Decoder nodelet
add_library(velodyne_decoder_nodelet
  src/velodyne_decoder_nodelet.cpp
)
target_link_libraries(velodyne_decoder_nodelet
  velodyne_decoder
  ${catkin_LIBRARIES}
)
add_dependencies(velodyne_decoder_nodelet
  ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS}
)

# Velodyne Decoder node
add_executable(velodyne_decoder_node
  src/velodyne_decoder_node.cpp
)
target_link_libraries(velodyne_decoder_node
  velodyne_decoder
 # profiler
  ${catkin_LIBRARIES}
)
add_dependencies(velodyne_decoder_node
  ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS}
)
