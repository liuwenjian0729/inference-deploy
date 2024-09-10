cmake_minimum_required(VERSION 3.22)
project(resnet-50)

set(CMAKE_CXX_STANDARD 14)

# compile sub lib
add_library(../engine)

include_directories(${CMAKE_CURRENT_BINARY_DIR})

file(GLOB_RECURSE SRC_FILES
    ${PROJECT_SOURCE_DIR}/engine/*.cc
	${PROJECT_SOURCE_DIR}/*.cc
)

add_executable(${PROJECT_NAME} main.cc)
target_link_libraries(${PROJECT_NAME}
    trt_backend
)
