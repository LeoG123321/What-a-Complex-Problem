#include <iostream>
#include <vector>
#include "ComplexList.h"
#include <complex>
using namespace std;

ComplexList::ComplexList(vector<ComplexNumber> list) {
	for (int i = 0; i < list.size(); i++) {
		numList.push_back(list[i]);
	}
}


}
