/* 
    Blessing Abumere
    10/12/2022
    COSC 175
*/

#include <iostream>

using namespace std;

int main()
{
	int num;
    int sum=0; // sum of inputs 
    int count = 0 ; //total times ran

	cout << endl << "Enter numbers, 999 to quit" << endl; //1.Start
	cin >> num; //1.Start

	while (num != 999) //2.Test
	{   
		sum += num;
        count++;
		cout << "\nNumber entered is: " << num << endl; //3.Action

		cout << "Enter numbers, 999 to quit" << endl; //4.Restart
		cin >> num; //4.Restart   
	}

    cout << "\nThe Total Of All Numbers Entered Was: " << sum << endl;
	cout << "The Total Count Was: " << count;
	return 0;
}