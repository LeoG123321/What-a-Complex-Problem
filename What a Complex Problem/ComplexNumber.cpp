#include "ComplexNumber.hpp"

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

ComplexNumber ComplexNumber::add(ComplexNumber sec) {			//sec == Secondary
	return ComplexNumber(realNum + sec.getRealNum(), imagineNum + sec.getImagineNum());
}

ComplexNumber ComplexNumber::sub(ComplexNumber sec) {
	return ComplexNumber(realNum - sec.getRealNum(), imagineNum - sec.getImagineNum());
}

ComplexNumber ComplexNumber::negate() {
	return ComplexNumber(realNum * -1, imagineNum * -1);
}
ComplexNumber ComplexNumber::mag() {
	return ComplexNumber(realNum * realNum / realNum, imagineNum * imagineNum / imagineNum);
}
ComplexNumber ComplexNumber::con() {
	return ComplexNumber(realNum, imagineNum * -1);
}


