/*
    Blessing Abumere
    9/28/2022
    GEN COMPUTER SCI (COSC175006)-1224
*/

#include <iostream>

using namespace std;

int main(){
    int testScore;

    cout << "Enter test score" << endl;
        cin >> testScore;
            if (testScore > 100 || testScore < 0){
                cout << "Invalid" << endl;
                return 0;
            }

    if (testScore >= 90)
        cout << "Your grade is A" << endl;
    else if (testScore >= 80)
        cout << "Your grade is B" << endl;
    else if (testScore >= 70)
        cout << "Your grade is C" << endl;
    else if (testScore >= 60)
        cout << "Your grade is D" << endl;
    else 
        cout << "Your grade is F" << endl;

    return 0;
}
