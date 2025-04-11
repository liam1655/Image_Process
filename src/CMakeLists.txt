project(img_proces_main)

# 添加子目录
add_subdirectory(img_algorithm)
add_subdirectory(img_process)
add_subdirectory(show_result)

# 设置可执行文件
add_executable(${PROJECT_NAME} main.cpp)

# 设置可执行文件所需的头文件
target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${ImgProcess_DIR}
    ${ShowResult_DIR}
)

# 设置可执行文件依赖的链接库
target_link_libraries(${PROJECT_NAME}
    PUBLIC
    img_process
    show_result
)
