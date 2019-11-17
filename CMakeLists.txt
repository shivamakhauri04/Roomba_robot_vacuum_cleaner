cmake_minimum_required(VERSION 2.8.3)
project(Roomba_robot_vacuum_cleaner)

## Find catkin and any catkin packages
find_package(catkin REQUIRED COMPONENTS tf roscpp rospy std_msgs genmsg message_generation)


## Generate added messages and services
generate_messages(DEPENDENCIES std_msgs)

## Declare a catkin package
catkin_package()

## Build talker and listener
include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(talker src/talker.cpp)
target_link_libraries(talker ${catkin_LIBRARIES})
#add_dependencies(talker beginner_tutorials_gencpp)

add_executable(listener src/listener.cpp)
target_link_libraries(listener ${catkin_LIBRARIES})
#add_dependencies(listener beginner_tutorials_gencpp)

## Testing
#if(CATKIN_ENABLE_TESTING)
#  find_package(rostest REQUIRED)

#  add_rostest_gtest(
#  tf_talker test/talker.launch test/talker.cpp)
#  target_link_libraries(tf_talker ${catkin_LIBRARIES})
#  add_dependencies(tf_talker talkWithParentWorld ${PROJECT_NAME}_generate_messages_cpp ${catkin_EXPORTED_TARGETS})
#endif()
