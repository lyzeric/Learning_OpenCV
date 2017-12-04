#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;

int main201712032216()
{
	Mat srcImage = imread("d://oracle.jpg");
	imshow("[原图]腐蚀操作", srcImage);
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImage;
	erode(srcImage, dstImage, element);
	imshow("[效果图]腐蚀操作", dstImage);
	waitKey(0);
	return 0;
}