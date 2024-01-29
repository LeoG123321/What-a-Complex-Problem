#include <vector>
#include "ComplexList.h"
#include <complex>
using namespace std;

ComplexList::ComplexList(vector<ComplexNumber> list) {
	for (int i = 0; i < list.size(); i++) {
		numList.push_back(list[list.size() - i]);
		list.pop_back();
	}
}

string ComplexList::sum() {
	ComplexNumber total;
	for (int i = 0; i < numList.size() - 1; i += 2) {
		total = total.add(numList[i]);
	}
	return total.pretty_print();
}
