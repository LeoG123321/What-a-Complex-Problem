/*
    Leonardo Gonzalez   1/25/2024

    Week 2              What a Complex Problem

    Write a well-tested ComplexNumber class that implements all of the operations listed in the 
    “Background Information” section. The class will include some extra methods that improve
    quality of life for developers (defined in the acceptance criteria).

    Then, write another class called ComplexList which is initialized with a list of ComplexNumber objects. 
    It should have a method that returns the sum of all of the numbers in the list.
*/

#include <iostream>
#include <cassert>
#include <cmath>
#include "ComplexList.h"
#include <vector>

using namespace std;

int main() {

	//Complex Number Tests
	ComplexNumber first(1, 2);
	ComplexNumber second(3, 4);
	ComplexNumber third(-1, -2);

	ComplexNumber test;

	float testNum;

	cout << "Starting Complex Number Test...\n" << endl;

	test = first.add(second);
	assert(test.getRealNum() == 4);
	assert(test.getImagineNum() == 6);
	cout << "Addition Test Complete..." << endl;

	test = first.sub(second);
	assert(test.getRealNum() == -2);
	assert(test.getImagineNum() == -2);
	cout << "Subtraction Test Complete..." << endl;

	test = first.negate();
	assert(test.getRealNum() == -1);
	assert(test.getImagineNum() == -2);
	cout << "Negation Test Complete..." << endl;
	
	testNum = sqrt(5);
	assert(first.mag() == testNum);
	cout << "Magnitude Test Complete..." << endl;

	test = first.con();
	assert(test.getRealNum() == 1);
	assert(test.getImagineNum() == -2);
	cout << "Conjugation Test Complete..." << endl;

	first.pretty_print();
	cout << " == 1 + 2i" << endl;

	cout << "\nComplex Number Test Completed." << endl;

	vector<ComplexNumber> numbers{first, second, third};

	vector<ComplexNumber> list;



	return 0;
}