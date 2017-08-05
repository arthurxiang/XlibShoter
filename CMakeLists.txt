cmake_minimum_required(VERSION 3.7)
project(XlibShoter)
find_package( OpenCV REQUIRED )
set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp main.cpp XlibShoter.h)
add_executable(XlibShoter ${SOURCE_FILES})
target_link_libraries(XlibShoter X11 Xext)
target_link_libraries(XlibShoter ${OpenCV_LIBS})
