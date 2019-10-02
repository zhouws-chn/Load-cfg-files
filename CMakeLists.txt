cmake_minimum_required(VERSION 2.8)

set( CMAKE_CXX_FLAGS "-std=c++11")

find_package(OpenCV REQUIRED)

include_directories( ${OpenCV_INCLUDE_DIRS} )

include_directories( include )

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

add_executable( test_opencv_yaml src/opencv_yaml.cpp test_opencv_yaml.cpp )
target_link_libraries( test_opencv_yaml ${OpenCV_LIBS})

