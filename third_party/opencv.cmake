# 设置 OpenCV 安装路径（你可以根据实际路径修改）
set(OpenCV_DIR "${CMAKE_SOURCE_DIR}/../SDK/opencv/MinGW")

# 包含头文件目录
set(OpenCV_INCLUDE_DIR "${OpenCV_DIR}/include")
include_directories(${OpenCV_INCLUDE_DIR})

# 链接库目录
set(OpenCV_LIB_DIR "${OpenCV_DIR}/lib/x64")
link_directories(${OpenCV_LIB_DIR})

# 定义 OpenCV 库列表
set(OpenCV_LIBS
    opencv_core480
    opencv_imgproc480
    opencv_highgui480
    opencv_videoio480
    opencv_video480
    opencv_imgcodecs480
    opencv_ximgproc480
    CACHE INTERNAL "List of OpenCV libraries"
)

# 导出变量给所有子模块使用
set(OpenCV_INCLUDE_DIR ${OpenCV_INCLUDE_DIR} CACHE INTERNAL "OpenCV include dir")
set(OpenCV_LIB_DIR ${OpenCV_LIB_DIR} CACHE INTERNAL "OpenCV lib dir")