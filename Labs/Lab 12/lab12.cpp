/*
    Blessing Abumere
    COSC 175
    11/30/2022
*/

#include <iostream>
using namespace std;

int main(){

	char TicTacTow[3][3] = { 
		{ '?', '?', '?' },
		{ '?', '?', '?' },
		{ '?', '?', '?'}
	};

	int  row;
	int  col;
	

	//2nd: Assign X to the First row and column
    TicTacTow[0][0] = 'X';
	

	//3rd: Assign O to the Last row and column
    TicTacTow[2][2] = 'O';




	//1st: Print the array in table form

	int r;
	int c;

	for (r = 0; r < 3; r++)
	{
		for (c = 0; c < 3; c++)
			cout << TicTacTow[r][c] << " ";
		cout << endl;
	}



	return 0;


}
