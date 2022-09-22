/*
    Blessing Abumere 
    9/21/2022 
    GEN COMPUTER SCI (COSC175006)-1224
*/

#include <iostream>

using namespace std;

int main(){
    int num1;
    int num2;
    int sum;
    int diff;
    int prod;
    int mod;
    float quot;
    
    cout << "Enter two integer values" << endl;
        cin >> num1 >> num2;

    sum = num1 + num2; 
        cout << endl <<  num1 << " + " << num2 << " is " << sum << endl;

    diff = num1 - num2; 
        cout << num1 << " - " << num2 << " is " << diff << endl;

    prod = num1 * num2; 
        cout << num1 << " * " << num2 << " is " << prod << endl;

    if (num2 == 0)
    {
        cout << "cannot divide by zero!" << endl;
    }
    else
    {
        mod = num1 % num2;
            cout << num1 << " % " << num2 << " is " << mod << endl;
        quot = (float) num1 / num2;   
            cout << num1 << " / " << num2 << " is " << quot << endl;
    }
    return 0;
}
