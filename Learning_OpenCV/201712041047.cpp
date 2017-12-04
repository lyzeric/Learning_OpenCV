#include<opencv2\opencv.hpp>
using namespace cv;

int main201712041047()
{
	VideoCapture capture("D://≥µ¡æ—πÀ´ª∆œﬂ ”∆µÕºœÒ.wmv");
	while (1)
	{
		Mat frame;
		capture >> frame;
		imshow("∂¡»° ”∆µ", frame);
		waitKey(300);
	}

	return 0;
}