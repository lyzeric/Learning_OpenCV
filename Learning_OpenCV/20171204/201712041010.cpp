#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;

int main201712041010()
{
	Mat srcImage = imread("D://oracle.jpg");
	imshow("均值滤波[原图]", srcImage);
	Mat dstImage;
	blur(srcImage, dstImage, Size(15, 15));
	imshow("均值滤波[效果图]", dstImage);
	waitKey(0);

	return 0;
}