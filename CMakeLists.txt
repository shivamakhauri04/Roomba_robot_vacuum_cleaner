cmake_minimum_required(VERSION 2.8.3)
project(roombarobotvacuumcleaner)

add_compile_options(-std=c++11)

## Find catkin and any catkin packages
find_package(catkin REQUIRED COMPONENTS roscpp rospy std_msgs move_base_msgs sensor_msgs geometry_msgs)


## Declare a catkin package
catkin_package()

## Build talker and listener
include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(roombaRobot src/main.cpp src/DepthCalculation.cpp src/walker.cpp)
target_link_libraries(roombaRobot ${catkin_LIBRARIES})


## Testing
#if(CATKIN_ENABLE_TESTING)
#  find_package(rostest REQUIRED)

#  add_rostest_gtest(
#  tf_talker test/talker.launch test/talker.cpp)
#  target_link_libraries(tf_talker ${catkin_LIBRARIES})
#  add_dependencies(tf_talker talkWithParentWorld ${PROJECT_NAME}_generate_messages_cpp ${catkin_EXPORTED_TARGETS})
#endif()
