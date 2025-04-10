cmake_minimum_required(VERSION 3.20)
project(image_process)

set(CMAKE_CXX_STANDARD 17)

# 设置可执行文件输出的目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# 获取当前目录下所有的.cpp文件
aux_source_directory(. SRC_LIST)

add_executable(image_process ${SRC_LIST})