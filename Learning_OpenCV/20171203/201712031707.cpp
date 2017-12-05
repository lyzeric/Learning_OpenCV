#include<opencv2/opencv.hpp>
using namespace cv;
int main201712031707()
{
	Mat srcImage = imread("d://oracle.jpg");
	imshow("[原始图]", srcImage);
	waitKey(0);
	return 0;
}
