cmake_minimum_required(VERSION 3.20)
project(image_process)

set(CMAKE_CXX_STANDARD 17)

# 动态库和可执行文件都输出到bin目录
if(WIN32)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
elseif(UNIX)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
endif()

# src下的所有.cpp文件生成动态库，动态库名称为imgcommon
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LIST)
add_library(imgcommon
    SHARED
    ${SRC_LIST}
)

# 设置动态库依赖的头文件目录
target_include_directories(imgcommon
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

add_executable(image_process main.cpp)

# 设置可执行文件依赖的头文件目录
target_include_directories(image_process
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

# 将可执行文件链接到动态库imgcommon
target_link_libraries(image_process
    PUBLIC
    imgcommon
)
