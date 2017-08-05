//
// Created by arthurxiang on 17-8-5.
//

// g++ screena.cpp -o screena -lX11 -lXext -Ofast -mfpmath=both -march=native -m64 -funroll-loops -mavx2 `pkg-config opencv --cflags --libs` && ./screena
#include <opencv2/opencv.hpp>  // This includes most headers!
#include "XlibShoter.h"

int main(){
    ScreenShot screen(1920, 0, 1440, 2560);
    cv::Mat img;

    for(uint i;; ++i){
        double start = clock();

        screen(img);

        if(!(i & 0b111111))
            //printf("fps %4.f  spf %.4f\n", FPS(start), 1 / FPS(start));
            break;

    }

    cv::imshow("img", img);
    cv::waitKey(0);
}