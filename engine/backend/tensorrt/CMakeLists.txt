cmake_minimum_required(VERSION 3.22)
project(trt_backend)

set(CMAKE_BUILD_TYPE Debug)

# CUDA & TensorRT
find_package(CUDA REQUIRED)
include_directories(${CUDA_INCLUDE_DIRS})
link_directories(${CUDA_LIBRARY_DIRS})
include_directories(/data/sft/TensorRT-8.6.1.6/include)
link_directories(/data/sft/TensorRT-8.6.1.6/lib)

# Local head & source files
include_directories(
    ${PROJECT_SOURCE_DIR}
)

file(GLOB_RECURSE SRC_FILES 
	${PROJECT_SOURCE_DIR}/utils/*.cc
	${PROJECT_SOURCE_DIR}/*.cc
)

add_library(${PROJECT_NAME} SHARED ${SRC_FILES})
target_link_libraries(${PROJECT_NAME} 
    ${CUDA_LIBRARIES}
    nvinfer
    nvparsers
    nvonnxparser
    nvinfer_plugin
)
