// Allen Trujillo
//CIS 17C
// Assignment 01, Part B

#include <iostream>

using namespace std;

void findDisorder(int arr[], int n, int* p){
	for (int k =1; k < n; k++){
		if (arr[k] < arr[k-1]){
			p = arr + k;
			return;
		}
	}
	p = nullptr;
}
int main() {
	int nums[6] = { 10, 20, 20, 40, 30, 50 };
	int* ptr;
	findDisorder(nums, 6, ptr);
	if (ptr == nullptr)
		cout << "The array is ordered" << endl;
	else {
		cout << "The disorder is at address " << ptr << endl;
		cout << "It's at index " << ptr - nums << endl;
		cout << "The item's value is " << *ptr << endl; //not sure if I was allowed to swap what side the asterisk was on or not
	}
	return 0;
}

/*BEGIN_GUIDELINE_COMMENTARY
The findDisorder function is supposed to find the first item
 in an array that is less than the element preceding it, 
and set the p parameter to point to that item, so the caller
 can know the location of that item. 
This function won't do that.  Your job is to fix it.

 Your fix must be to the function only; 
you must not change the main routine below in any way,
 yet as a result of your fixing the function,
 the main routine below must work correctly.
ENDING_GUIDELINE_COMMENTARY*/