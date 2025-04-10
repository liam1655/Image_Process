cmake_minimum_required(VERSION 3.20)
project(image_process
    VERSION 1.0
    DESCRIPTION "Image processing project"
    HOMEPAGE_URL "https://github.com/liam1655/Image_Process"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

# 该CMakeLists.txt文件是项目的根目录下的CMake配置文件
# 该文件设置的变量子目录下的CMakeLists.txt也可以使用

# 设置动态库和可执行文件的输出目录
if(WIN32)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
elseif(UNIX)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
endif()

# 变量和目录设置
set(ImgAlgorithm_DIR ${CMAKE_SOURCE_DIR}/src/img_algorithm)
set(ImgProcess_DIR ${CMAKE_SOURCE_DIR}/src/img_process)

# 添加子目录
add_subdirectory(src)       # 该语句可以查找src目录下的CMakeLists.txt文件
