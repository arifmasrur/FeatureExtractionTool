#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, char** argv) {
	Mat img;
	img = imread("baboon.png");

	if (img.empty()) {
		printf("Error is reading image!\n");
		return 0;
	}

	string WindowName = "Display raw image";
	namedWindow(WindowName, WINDOW_AUTOSIZE);
	imshow(WindowName, img);

	waitKey();

	return 0;


}