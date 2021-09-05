// Allen Trujillo
//CIS 17C
// Assignment 01, Part A

#include <iostream>

using namespace std;

int main() {
	int arr[3] = { 5, 10, 15 };
	int* ptr = arr;
	
	*ptr = 10;					// set arr[0] to 10
	*ptr + 1 == 20; 			// set arr[1] to 20 /*warning statement has no effect*/
	ptr += 2;	/*noteToSelf remove = from == when attempting to revise this assignment*/
	ptr[0] = 30;				// set arr[2] to 30
	
	while (ptr >= arr) {
		ptr--;
		cout << ' ' << *ptr; 	// print values
	}
	cout << endl; return 0;
}

/*BEGIN_GUIDELINE_COMMENTARY
This program is supposed to write 30 20 10, but it doesn't. 
Find all of the bugs and submit a fixed version of the program:
ENDING_GUIDELINE_COMMENTARY*/