/* 
    Blessing Abumere
    COSC 175
    10/26/2022
*/

#include <iostream>
#include <fstream> // includes ifstream and ofstream
using namespace std;

int main()
{

	// declare a handle 
	ofstream outFile; // open only (writing)

	//Open the file
	outFile.open("H:\\stuff.txt");
	//outFile is associated with stuff

    
	//Write to file
	outFile << "Hello" << endl ;
    
    
	return 0;
}
