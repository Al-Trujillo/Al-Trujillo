// Allen Trujillo
//CIS 17C
// Assignment 00, Part A

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
double totalAmount,	averageAmount, largestMonth, smallestMonth,
January, February, March, April, May, June, July, August, September, October, November, December;

	cout << "This program will calculate the total, average, highest, and lowest amount of money spent on your credit card.\n\n";
	cout << "\nInput the total amount spent with the credit card for each month: \n"; 
		
	cout << "\nJanuary: " << setw(33); 
	cin >> January;
		
	cout << "\nFebruary: " << setw(25);
	cin >> February;
		
	cout << "\nMarch: " << setw(43);
	cin >> March;
		
	cout << "\nApril: " << setw(43);
	cin >> April;
		
	cout << "\nMay: " << setw(45);
	cin >> May;
		
	cout << "\nJune: " << setw(44);
	cin >> June;
		
	cout << "\nJuly: " << setw(44);
	cin >> July;
		
	cout << "\nAugust: " << setw(42);
	cin >> August;
		
	cout << "\nSeptember: " << setw(39);
	cin >> September;
		
	cout << "\nOctober: " << setw(41);
	cin >> October;
		
	cout << "\nNovember: " << setw(40);
	cin >> November;
		
	cout << "\nDecember: " << setw(40);
	cin >> December;

totalAmount = (January + February + March + April + May + June + July + August + September + November + December);
averageAmount = (January + February + March + April + May + June + July + August + September + November + December) / 12;

largestMonth = smallestMonth = January;
{
	if(February > largestMonth) largestMonth = February;
	else if (February < smallestMonth) smallestMonth = February;
	
	if(March > largestMonth) largestMonth = March;
	else if (March < smallestMonth) smallestMonth = March;
	
	if(April > largestMonth) largestMonth = April;
	else if (April < smallestMonth) smallestMonth = April;
	
	if(May > largestMonth) largestMonth = May;
	else if (May < smallestMonth) smallestMonth = May;
	
	if(June > largestMonth) largestMonth = June;
	else if (June < smallestMonth) smallestMonth = June;
	
	if(July > largestMonth) largestMonth = July;
	else if (July < smallestMonth) smallestMonth = July;
	
	if(August > largestMonth) largestMonth = August;
	else if (August < smallestMonth) smallestMonth = August;
	
	if(September > largestMonth) largestMonth = September;
	else if (September < smallestMonth) smallestMonth = September;
	
	if(October > largestMonth) largestMonth = October;
	else if (October < smallestMonth) smallestMonth = October;
	
	if(November > largestMonth) largestMonth = November;
	else if (November < smallestMonth) smallestMonth = November;
	
	if(December > largestMonth) largestMonth = December;
	else if (December < smallestMonth) smallestMonth = December;
}
	cout << setprecision(2) << fixed;

	cout << "\nThe total amount of money spent was: " << setw(13) << totalAmount;
	cout << "\nThe average amount of money spent per month was: " << setw(1) << averageAmount;
	cout << "\nThe most amount of money spent in a month was: " << setw(3) << largestMonth;
	cout << "\nThe least amount of money spent in a month was: " << setw(2) << smallestMonth;
	
return 0;
}

/*BEGIN_GUIDELINE_COMMENTARY
Write a program that lets the user enter the total amount of money
 spent on a credit card for each of 12 months into an array of doubles. 
The program should have the following functions:

A totalAmount function that takes in an array and size of the array
 as input arguments and returns the total of the 12 values in the array.
An averageAmount function that takes in an array and size of the array
 as input arguments and returns the average of the 12 values in the array.
A largestMonth function that takes in an array and size of the array
 as input arguments and returns the largest value in the array.
A smallestMonth function that takes in an array and size of the array
 as input arguments and returns the smallest value in the array
The output should look like the following (given the example input):

Here are the credit card totals for each month:

January  : $9.50
February : $19.50
March    : $29.50
April    : $39.50
May      : $0.00
June     : $59.50
July     : $59.50
August   : $100.00
September: $40.75
October  : $30.75
November : $20.75
December : $10.75


The total amount of money spent was $420.00
The average amount of money spent per month was $35.00
The most amount of money spent in a month was $100.00
The least amount of money spent in a month was $0.00
ENDING_GUIDELINE_COMMENTARY*/