#include <opencv2/opencv.hpp>	
#include <iostream>

using namespace std;
using namespace cv;


int main()
{
    Mat *image = new Mat();
    *image = imread("../test.png");
    cout << image->cols << endl;
    cout << image->rows << endl;
    imwrite("../write.png",*image);
    delete image;
}