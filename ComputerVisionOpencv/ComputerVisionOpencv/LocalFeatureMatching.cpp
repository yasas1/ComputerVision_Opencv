#include "stdafx.h"
#include "opencv2/opencv.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/stitching.hpp"
#include "opencv2/core/core.hpp"
#include <iostream>


using namespace std;
using namespace cv;


using namespace cv;

int main()
{
	Mat image = imread("Det.jpg", 1);

	imshow("display", image);

	if (image.empty())
	{
		cout << "Could not open or find the image" << endl;
		cin.get(); //wait for any key press

	}


	waitKey();

	return 0;
}

