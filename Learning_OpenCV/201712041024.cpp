#include<opencv2/opencv.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;

int main201712041024()
{
	Mat srcImage = imread("D://oracle.jpg");
	imshow("[ԭʼͼ]Canny��Ե���", srcImage);
	Mat dstImage, edge, grayImage;
	dstImage.create(srcImage.size(), srcImage.type());
	cvtColor(srcImage, grayImage, COLOR_BGR2GRAY);
	blur(grayImage, edge, Size(3, 3));
	Canny(edge, edge, 3, 9, 3);
	imshow("[Ч��ͼ]Canny��Ե���", edge);
	waitKey(0);

	return 0;
}