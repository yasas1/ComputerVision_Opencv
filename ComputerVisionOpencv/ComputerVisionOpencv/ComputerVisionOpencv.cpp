// ComputerVisionOpencv.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include "AllHeader.h"


using namespace std;
using namespace cv;


int main()
{
	Mat image = imread("C:/Users/Dell/Desktop/data_dir/Fish/img/0001.jpg");
	//Mat image = imread("Det.jpg", 1);

	imshow("display", image);

	if (image.empty())
	{
		cout << "Could not open or find the image" << endl;
		cin.get(); //wait for any key press

	}


	waitKey(); 

	

	return 0;
}