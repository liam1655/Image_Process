project(show_result)

# 生成动态库
add_library(show_result SHARED show_result.cpp)


# 添加动态库所需的包含目录
target_include_directories(show_result
    PUBLIC
    ${OpenCV_INCLUDE_DIR}
)

# 设置动态库依赖的其他库
target_link_libraries(show_result
    PUBLIC
    ${OpenCV_LIBS}
)