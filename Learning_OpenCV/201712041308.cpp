#include<opencv2/opencv.hpp>
using namespace cv;

int main201712041308()
{
	VideoCapture capture(0);
	while (1)
	{
		Mat frame;
		capture >> frame;
		imshow("∂¡»° ”∆µ", frame);
		waitKey(30);
	}
	return 0;
}