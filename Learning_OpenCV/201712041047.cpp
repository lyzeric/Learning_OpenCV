#include<opencv2\opencv.hpp>
using namespace cv;

int main201712041047()
{
	VideoCapture capture("D://����ѹ˫������Ƶͼ��.wmv");
	while (1)
	{
		Mat frame;
		capture >> frame;
		imshow("��ȡ��Ƶ", frame);
		waitKey(300);
	}

	return 0;
}