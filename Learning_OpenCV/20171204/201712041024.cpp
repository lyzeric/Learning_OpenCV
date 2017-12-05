#include<opencv2/opencv.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;

int main201712041024()
{
	Mat srcImage = imread("D://oracle.jpg");
	imshow("[Ô­Ê¼Í¼]Canny±ßÔµ¼ì²â", srcImage);
	Mat dstImage, edge, grayImage;
	dstImage.create(srcImage.size(), srcImage.type());
	cvtColor(srcImage, grayImage, COLOR_BGR2GRAY);
	blur(grayImage, edge, Size(3, 3));
	Canny(edge, edge, 3, 9, 3);
	imshow("[Ð§¹ûÍ¼]Canny±ßÔµ¼ì²â", edge);
	waitKey(0);

	return 0;
}