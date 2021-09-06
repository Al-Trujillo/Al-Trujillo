// Allen Trujillo
//CIS 17C
// Assignment 00, Part B

#include <fstream>
using namespace std;

int main()
{
	fstream readPrices("prices-A00pB.txt", ios::in);
	fstream displayPrices("prices-A00pB.txt", ios::out);
	int num;

	for (int i = 1; i <= 15; i++)
	{
		readPrices >> num;    
		displayPrices << num;
	}
	readPrices.close();      
	displayPrices.close();

	return 0;
}

/*BEGIN_GUIDELINE_COMMENTARY
Write a program that reads a file, prices.txt,
 into an integer array of size 15. 
The program must have a void function called readPrices
 that takes in two arguments: an ifstream object for
 the input file and an integer array.  
There must also be a void function called displayPrices
 that takes in an integer array and array size as inputs.  
 
The program should display the prices to the user as such:

The prices for the 15 rows are:

$15
$14
$13
$12
$11
$10
$9
$8
$7
$6
$5
$4
$3
$2
$1
ENDING_GUIDELINE_COMMENTARY*/