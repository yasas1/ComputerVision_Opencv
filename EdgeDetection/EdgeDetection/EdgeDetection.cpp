// EdgeDetection.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include <stdlib.h>
#include <stdio.h>

using namespace std;
using namespace cv;

Mat src, src_gray;
Mat dst, detected_edges;

int edgeThresh = 1;
int lowThreshold;
int const max_lowThreshold = 100;
int ratio = 3;
int kernel_size = 3;
//char* window_name = "Edge Map";


void CannyThreshold(int, void*)
{
	/// Reduce noise with a kernel 3x3
	blur(src_gray, detected_edges, Size(3, 3));

	/// Canny detector
	Canny(detected_edges, detected_edges, lowThreshold, lowThreshold*3, kernel_size);

	/// Using Canny's output as a mask, we display our result
	dst = Scalar::all(0);

	src.copyTo(dst, detected_edges);
	imshow("Edge Map", dst);
}

void Canny2()
{
	Mat src1;
	src1 = imread("C:/Users/Dell/Desktop/data_dir/Fish/img/0001.jpg");
	namedWindow("Original image");
	imshow("Original image", src1);

	Mat gray, edge, draw;
	cvtColor(src1, gray, COLOR_BGR2GRAY);

	Canny(gray, edge, 50, 150, 3);

	edge.convertTo(draw, CV_8U);
	namedWindow("image", WINDOW_AUTOSIZE);
	imshow("image", draw);

	waitKey(0);
}

int main()
{
	/* src = imread("C:/Users/Dell/Desktop/data_dir/Fish/img/0001.jpg");

	if (!src.data)
	{
		return -1;
	}

	/// Create a matrix of the same type and size as src (for dst)
	dst.create(src.size(), src.type());

	/// Convert the image to grayscale
	cvtColor(src, src_gray, COLOR_BGR2GRAY);

	/// Create a window
	namedWindow("Edge Map", WINDOW_AUTOSIZE);

	/// Create a Trackbar for user to enter threshold
	createTrackbar("Min Threshold:", "Edge Map", &lowThreshold, max_lowThreshold, CannyThreshold);

	/// Show the image
	CannyThreshold(0, 0);

	/// Wait until user exit program by pressing a key
	waitKey(0); */

	Canny2();

	return 0;
}


