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
#include "ComplexNumber.hpp"

using namespace std;

int main() {
	ComplexNumber primary(1, 2);
	ComplexNumber secondary(3, 4);
	ComplexNumber test;

	cout << "Starting Complex Number Test..." << endl;
	
	test = primary.add(secondary);
	assert(test.getRealNum() == 4);
	assert(test.getImagineNum() == 6);
	cout << "Addition Test Passed..." << endl;
	
	test = primary.sub(secondary);
	assert(test.getRealNum() == -2);
	assert(test.getImagineNum() == -2);
	cout << "Subtraction Test Passed..." << endl;
	
	test = primary.mult(secondary);
	assert(test.getRealNum() == -5);
	assert(test.getImagineNum() == 10);
	cout << "Multiplication Test Passed..." << endl;

	cout << "Test Complete." << endl;
	return 0;
}