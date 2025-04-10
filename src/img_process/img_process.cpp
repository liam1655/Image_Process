#include "img_process.h"

void ImageProcess::processImage(){
    ImageAlgorithm imgAlg;
    imgAlg.imgResize();
    imgAlg.imgToGray();
}