// ComputerVisionOpencv.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include "AllHeader.h"


using namespace std;
using namespace cv;


int main()
{
	Mat image1 = imread("C:/Users/Dell/Desktop/data_dir/Fish/img/0001.jpg");
	Mat image2 = imread("C:/Users/Dell/Desktop/data_dir/Fish/img/0199.jpg");

	imshow("img_1", image1);
	imshow("img_2", image2);

	Rect rect = Rect(134, 55, 60, 88);

	Mat image1_crop = image1(rect);

	imshow("image1_crop", image1_crop);

	rectangle(image1, rect, Scalar(255, 0, 0), 3, 8, 0);

	imshow("img_1_rec", image1);

	
	waitKey();

	return 0;
}