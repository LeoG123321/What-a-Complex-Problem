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
	ComplexNumber mag();				//Magnitude
	ComplexNumber con();				//Conjugation
};