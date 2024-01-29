#include <string>
using namespace std;

class ComplexNumber
{
private:
	float realNum;			//Real Number
	float imagineNum;		//Imaginary Number

public:
	ComplexNumber(float, float);		//Contructor
	ComplexNumber();					//Default Constructor

	float getRealNum();					//Returns Real Number
	float getImagineNum();				//Returns Imagninary Number

	ComplexNumber add(ComplexNumber);	//Addition
	ComplexNumber sub(ComplexNumber);	//Subtract

	ComplexNumber negate();				//Negation
	float mag();						//Magnitude
	ComplexNumber con();				//Conjugation

	void pretty_print();				//prints in the form "a+ bi"
};