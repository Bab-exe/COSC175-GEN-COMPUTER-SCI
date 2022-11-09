 /*
    Blessing Abumere
    COSC 175
    11/2/2022
*/
 
 //*********************************************
//New Welcome Home Program
//This program prints a "Welcome Home" message
//*********************************************
#include <iostream>
using namespace std;

        
void PrintLines(int numLines); //prototype //Formal Parameters 

int main()
{
	PrintLines(2); //Actual Parameters 
	cout << "Welcome Home!" << endl;

    PrintLines(4); //Actual Parameters 
	system("pause"); //to avoid losing any points
	return 0;
	
} // end of main method


//PrintLines prints lines of astericks, where
//numlines specifiles how many lines to print
//*********************************************
void PrintLines(int numLines) //Formal Parameters 
{
	int line;

	for (line = 0; line < numLines; line++)
	{
		cout << "******************************" << endl;
	}
	
}
