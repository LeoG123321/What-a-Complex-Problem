#include "ComplexNumber.hpp"
#include <cmath>

ComplexNumber::ComplexNumber(float realNum, float imagineNum) {
	this->realNum = realNum;
	this->imagineNum = imagineNum;
}

ComplexNumber::ComplexNumber() {
	realNum = 0;
	imagineNum = 0;
}


float ComplexNumber::getRealNum() {
	return realNum;
}
float ComplexNumber::getImagineNum() {
	return imagineNum;
}

ComplexNumber ComplexNumber::add(ComplexNumber sec) {			//sec == Second Complex Number
	return ComplexNumber(realNum + sec.getRealNum(), imagineNum + sec.getImagineNum());
}
ComplexNumber ComplexNumber::sub(ComplexNumber sec) {
	return ComplexNumber(realNum - sec.getRealNum(), imagineNum - sec.getImagineNum());
}

ComplexNumber ComplexNumber::negate() {
	return ComplexNumber(realNum * -1, imagineNum * -1);
}
ComplexNumber ComplexNumber::mag() {
	return ComplexNumber(sqrt(realNum * realNum), sqrt(imagineNum * imagineNum));
}
ComplexNumber ComplexNumber::con() {
	return ComplexNumber(realNum, imagineNum * -1);
}


