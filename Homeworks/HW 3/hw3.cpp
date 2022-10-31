/* Blessing Abumere
    COSC 175
    10/26/2022
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    /*
        Write code that will input a number and print the number, the square of the number, and the cube of the number. 
        Continue the operation until 999 is entered. (Hint: prompt the user to enter number before the loop begins)
    */
    int number;

    cout << "Enter A Number. (Input 999 To Stop)" << endl;
        cin >> number;

    while (number != 999){
        cout << "Inputted: (" << number << ")\n"  ;
        cout << "\tsquared: " << number << "^2 = " << (number*number) << endl;
        cout << "\tcubed:   " << number << "^3 = " << (number*number*number) << endl;
            cin >> number;
   }

   system("pause");
   return 0;
}