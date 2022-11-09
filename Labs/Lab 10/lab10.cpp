/*
    Blessing Abumere
    COSC 175
    11/9/2022   
*/

 // Value-returning example
#include <iostream>
using namespace std;

float Double(float number);

int main()
{
	char  ans;
	float number;
	float area;
	float finalResult;

	cout << " do you want to play today (y/n)" << endl;
	cin >> ans;

	while ((ans == 'Y' || ans == 'y'))
	{
		cout << "Enter a number" << endl;
		cin >> number;

		finalResult = Double(number);
		cout << number << " Doubled is " << finalResult << endl; //b)	Correct the main function to print out the value that is returned from the Double function

		cout << " do you want to play today (y/n)" << endl;
		cin >> ans;
	}

	return 0;
} // end of main function


//****function Double***** a)	Correct the value-returning function to double, “number” 

float Double(float number) 
{
	float results;

	results = number * 2;

	return results;

}
  
     
