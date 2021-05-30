#include "../include/ocr.hpp"

std::string perform_ocr(cv::Mat image) {
	if(image.empty()) {
		return "Image not found";
	}
	return "Image found";
}
