cmake_minimum_required(VERSION 2.8.3)
project(tiburon_trainees_2019)


find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

catkin_package(CATKIN_DEPENDS std_msgs)

include_directories(include)

include_directories(
  ${catkin_INCLUDE_DIRS}
)


add_library(Node1 include/tiburon_trainees_2019/task1/node1.h src/task1/node1.cpp)
add_executable(node1 src/task1/node1_creator.cpp)
target_link_libraries(node1 Node1 ${catkin_LIBRARIES})
add_dependencies(node1 Node1 ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

add_library(Node2 include/tiburon_trainees_2019/task1/node2.h src/task1/node2.cpp)
add_executable(node2 src/task1/node2_creator.cpp)
target_link_libraries(node2 Node2 ${catkin_LIBRARIES})
add_dependencies(node2 Node2 ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

add_library(Node3 include/tiburon_trainees_2019/task1/node3.h src/task1/node3.cpp)
add_executable(node3 src/task1/node3_creator.cpp)
target_link_libraries(node3 Node3 ${catkin_LIBRARIES})
add_dependencies(node3 Node3 ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
