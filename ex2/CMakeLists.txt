cmake_minimum_required(VERSION 3.5)
project(ex02)

set(CMAKE_CXX_STANDARD 11)

if (${APPLE})
    # brew location for package `opencv@2`
    find_package(OpenCV 2.4 REQUIRED HINTS /usr/local/opt/opencv@2)
else ()
    find_package(OpenCV 2.4 REQUIRED)
endif ()

include_directories(${OpenCV_INCLUDE_DIRS})

set(SOURCE_FILES ex02.cpp)
add_executable(ex02 ${SOURCE_FILES})
target_link_libraries(ex02 ${OpenCV_LIBS})