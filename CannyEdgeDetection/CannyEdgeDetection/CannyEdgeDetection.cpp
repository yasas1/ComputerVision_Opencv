// CannyEdgeDetection.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include <stdlib.h>
#include <stdio.h>

using namespace std;
using namespace cv;

void cannyEdgeDetec(Mat img)
{
	Mat src = img;
	//src = imread("C:/Users/Dell/Desktop/data_dir/Fish/img/0001.jpg");
	namedWindow("Original image");
	imshow("Original image", src);

	Mat gray, edge, draw;
	cvtColor(src, gray, COLOR_BGR2GRAY);

	Canny(gray, edge, 50, 150, 3);

	edge.convertTo(draw, CV_8U);
	namedWindow("image", WINDOW_AUTOSIZE);
	imshow("image", draw);

	waitKey(0);
}

int main()
{
	Mat img_1, img_2;
	img_1 = imread("C:/Users/Dell/Desktop/data_dir/Fish/img/0001.jpg");

	cannyEdgeDetec(img_1);
}

