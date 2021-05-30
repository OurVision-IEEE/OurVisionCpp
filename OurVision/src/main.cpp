#include "../include/ocr.hpp"

int main() {
	cv::Mat image =  cv::imread("thumb.php.jpeg");
	std::string text = perform_ocr(image);
	std::cout << text << std::endl << std::endl;
}
