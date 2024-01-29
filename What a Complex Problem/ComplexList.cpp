#include <vector>
#include "ComplexList.h"
#include <complex>
using namespace std;

ComplexList::ComplexList(vector<ComplexNumber> list) {
	for (int i = 0; i < list.size(); i++) {
		static ComplexNumber temp = list.pop_back();
		numList.push_back(list.pop_back());
	}
}
