// Allen Trujillo
//CIS 17C
// Assignment 01, Part C

#include <iostream>
#include <cmath>
using namespace std;

void hypotenuse(double leg1, double leg2, double* resultPtr){
	*resultPtr = sqrt(leg1*leg1 + leg2*leg2);
}

int main() {
		double* p;
		hypotenuse(1.5, 2.0, p); //caution, p is used uninitialized in this function: I do not know how to fix this.
		cout << "The hypotenuse is " << *p << endl;
}

/*BEGIN_GUIDELINE_COMMENTARY
The hypotenuse function is correct, but the main function has a problem. 
Fix it. Your fix must be to the main function only; you must not change
 the hypotenuse function in any way.
ENDING_GUIDELINE_COMMENTARY*/