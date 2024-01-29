class ComplexNumber 
{
private:
	float realNum;			//Real Number
	float imagineNum;		//Imaginary Number

public:
	ComplexNumber(float, float);
	ComplexNumber();

	float getRealNum();
	float getImagineNum();

	ComplexNumber add(ComplexNumber);	//Addition
	ComplexNumber sub(ComplexNumber);	//Subtract
	ComplexNumber negate();				//Negation

	ComplexNumber mag();				//Magnitude
	ComplexNumber con();				//Conjugation
};