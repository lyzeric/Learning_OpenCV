#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;

int main201712041010()
{
	Mat srcImage = imread("D://oracle.jpg");
	imshow("��ֵ�˲�[ԭͼ]", srcImage);
	Mat dstImage;
	blur(srcImage, dstImage, Size(15, 15));
	imshow("��ֵ�˲�[Ч��ͼ]", dstImage);
	waitKey(0);

	return 0;
}