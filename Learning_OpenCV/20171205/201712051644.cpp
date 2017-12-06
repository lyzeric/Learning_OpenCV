#include<opencv2/opencv.hpp>
#include<vector>
using namespace cv;
using namespace std;

void createAlphaMat(Mat &mat)
{
	for (int i = 0; i < mat.rows; ++i) {
		for (j = 0; j < mat.cols; ++j) {
			Vec4b&rgba = mat.at<Vec4b>(i, j);
			rgba[0] = UCHAR_MAX;
			rgba[1] = saturate_cast<uchar>((float(mat.cols - j)) /
				((float)mat.cols) * UCHAR_MAX);
			rgba[2] = saturate_cast<uchar>((float(mat.cols - j)) /
				((float)mat.cols) * UCHAR_MAX);
			rgba[3] = saturate_cast<uchar>((float(mat.cols - j)) /
				((float)mat.cols) * UCHAR_MAX);

		}
	}

}