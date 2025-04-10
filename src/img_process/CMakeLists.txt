project(img_proces)

# 添加动态库
add_library(img_process SHARED img_process.cpp)

# 添加动态库所需的包含目录
target_include_directories(img_process
    PUBLIC
    ${ImgAlgorithm_DIR}
)

# 设置动态库依赖的其他库
target_link_libraries(img_process
    PUBLIC
    img_algorithm
)