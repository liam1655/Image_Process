#include <iostream>
#include "img_algorithm.h"

void imgResizeTest() {
    ImageAlgorithm imgAlg;
    imgAlg.imgResize();
    std::cout << "Image resized!" << std::endl;
}

void imgToGrayTest() {
    ImageAlgorithm imgAlg;
    imgAlg.imgToGray();
    std::cout << "Image converted to grayscale!" << std::endl;
}

int main() {
    imgResizeTest();
    imgToGrayTest();
    return 0;
}