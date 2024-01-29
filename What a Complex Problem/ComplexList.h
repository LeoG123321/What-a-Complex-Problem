#include <vector>
#include "ComplexNumber.hpp"

using namespace std;

class ComplexList
{
private:
	vector<ComplexNumber> numList;

public:
	ComplexList(vector<ComplexNumber>);
	void sum();
};

