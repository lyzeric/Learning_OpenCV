#include<opencv2/opencv.hpp>
using namespace cv;

int main201712051118()
{
	int a = 66, b = 68;
	printf("\n\t%d %d\n", a, b);
	printf("\n\t%06d 06%d\n", a, b);
	printf("\n\t%c %c\n", a, b);
	printf("\n\t���Ϊ: a=%d,b=%d\n", a, b);
	printf("\t��ǰʹ�õ�OpenCV�汾Ϊ" CV_VERSION);
	getchar();
	return 0;
}
