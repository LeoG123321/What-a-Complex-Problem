#include <iostream>
#include <cmath>
#include "ComplexNumber.hpp"

ComplexNumber::ComplexNumber(float realNum, float imagineNum) {
	this->realNum = realNum;
	this->imagineNum = imagineNum;
}

ComplexNumber::ComplexNumber() {
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
float ComplexNumber::mag() {
	return sqrt((realNum * realNum) + (imagineNum * imagineNum));
}
ComplexNumber ComplexNumber::con() {
	return ComplexNumber(realNum, imagineNum * -1);
}

string ComplexNumber::pretty_print() {
	string pretty = "";
	pretty += realNum;
	pretty += " + ";
	pretty += imagineNum;
	pretty += "i";

	return pretty;
}

