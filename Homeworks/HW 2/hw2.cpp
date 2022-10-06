#include <iostream>
#include <string>
using namespace std;

struct person {
    string name;
    int age;
    char sex;
    string display(){
        cout << "name: " name << endl;
        cout << "age: " age << endl;
        cout << "sex: " sex << endl;
        
    }
};

int main(){
    /*
        1.	If an angle is equal to 90 degrees, print the message "The angle is a right angle" else print the message “The angle is not a right angle." 
    */
    float angle=90;

    if (angle == 90)
        cout << "The angle is a right angle.";
    else 
        cout << "The angle is not a right angle.";

    person x;
    cout << x.display();
    return 0;
}