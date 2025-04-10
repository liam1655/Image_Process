project(img_proces_main)

# 添加子目录
add_subdirectory(img_algorithm)
add_subdirectory(img_process)

# 设置可执行文件
add_executable(${PROJECT_NAME} main.cpp)

# 设置头文件
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${ImgProcess_DIR}
)

# 设置链接库
target_link_libraries(${PROJECT_NAME}
    PUBLIC
    img_process
)