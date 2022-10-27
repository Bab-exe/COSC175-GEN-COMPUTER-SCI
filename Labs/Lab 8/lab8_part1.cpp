/* 
    Blessing Abumere
    COSC 175
    10/26/2022
*/


#include <iostream>
#include <string>
#include <fstream> // includes ifstream and ofstream
using namespace std;

int main()
{
	int total;
	int temp;

	temp = 0;
	total = 0;

	// declare a handle 
	ifstream infile; // open only  

	//Open the file
	infile.open("H:\\testFile1.txt");
	//outFile is associated with stuff

	//prime read

	infile >> temp;
	while (infile)
	{
		total = total + temp;

		infile >> temp;
	}

	cout <<"The total of all temperatures is " << total << endl;
  
	
	return 0;
}

