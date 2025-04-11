#include "show_result.h"

void ShowResult::showImgResult() {
    cv::Mat img = cv::imread("C:\\Users\\Lenovo\\Desktop\\1.png");
    if (img.empty()) {
        std::cerr << "Error: Could not open or find the image!" << std::endl;
        return;
    }
    cv::imshow("Image", img);
    cv::waitKey(0); // Wait for a keystroke in the window
}