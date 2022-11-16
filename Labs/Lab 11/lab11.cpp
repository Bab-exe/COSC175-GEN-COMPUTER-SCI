/*
    Blessing Abumere
    COSC 175
    11/16/2022 
*/
#include <iostream>
using namespace std;
int main()
{
	int   tests[6]; // array declaration
	
	//input test scores
	cout << " Enter " << 6 << " test scores: " << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << "Enter Test " << i + 1 << ": ";
		cin >> tests[i];
	}

	//print out first test scores
	cout << endl;

	cout << "First test score is " << tests[0] << endl;

	//print out Last test scores
    cout << "Last Test Score Is " << tests[5] << endl;


	return 0;
}
