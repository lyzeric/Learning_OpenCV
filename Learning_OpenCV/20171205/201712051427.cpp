#include<opencv2/opencv.hpp>
using namespace cv;
int main201712051427()
{
	Mat image0 = imread("d://oracle.jpg",2|4);
	Mat image1 = imread("d://oracle.jpg", 0);
	Mat image2 = imread("d://oracle.jpg", 199);
	imshow("[载入无损的源图像]", image0);
	waitKey(0);
	imshow("[载入灰度图]", image1);
	waitKey(0);
	imshow("[载入3通道的彩色图像]", image2);
	waitKey(0);


	
	return 0;
}
