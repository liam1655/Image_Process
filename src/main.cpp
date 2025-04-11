#include "img_process.h"
#include "show_result.h"

int main() {
    ImageProcess imgProc;
    imgProc.processImage();

    ShowResult showResult;
    showResult.showImgResult();

    return 0;
}