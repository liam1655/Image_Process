project(img_algorithm_test)

add_executable(${PROJECT_NAME} img_algorithm_test.cpp)

target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${ImgAlgorithm_DIR}
)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
    img_algorithm
)

# 把可执行文件注册为 CTest 框架的测试项。
add_test(NAME img_alg_test          # 测试名称，自定义
    COMMAND ${PROJECT_NAME}         # 执行测试的命令或可执行程序，后面可以加参数
)