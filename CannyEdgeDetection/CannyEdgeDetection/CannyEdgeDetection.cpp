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

void cannyEdgeDetec(Mat img, int threshold1, String outputName)
{
	Mat src = img;
	int threshold = threshold1;
	//src = imread("C:/Users/Dell/Desktop/data_dir/Fish/img/0001.jpg");
	namedWindow("Original image" + outputName);
	imshow("Original image" + outputName, src);

	Mat gray, edge, draw;
	cvtColor(src, gray, COLOR_BGR2GRAY);

	Canny(gray, edge, threshold, threshold*3, 3);

	edge.convertTo(draw, CV_8U);
	namedWindow("image" + outputName, WINDOW_AUTOSIZE);
	imshow("image" + outputName, draw);

	imwrite("C:/Users/Dell/Desktop/output2/"+ outputName +".jpg", draw);

}

int main()
{
	Mat img_1, img_2; 
	
	img_1 = imread("C:/Users/Dell/Desktop/data_dir/Fish/img/0001.jpg");

	cannyEdgeDetec(img_1,50,"output3");

	waitKey(0);

	img_2 = imread("C:/Users/Dell/Desktop/data_dir/Fish/img/0199.jpg");

	cannyEdgeDetec(img_2, 50, "output4");

	waitKey(0);
}

