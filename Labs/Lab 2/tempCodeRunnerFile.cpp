/*
    Lab 2 
    Blessing Abumere
    9/14/2022
    GEN COMPUTER SCI (COSC175006)-1224
*/

#include <iostream>
#include <string>
using namespace std;

int main ()
{   
	//declarations
    string Fname,Lname;
    float bodyTemp,weight;
    char sex;    
    int age,feet,inches; //AGE , weight, and heights
    
	//inputs
    cout << "Enter your first name: ";
	    cin >> Fname;
    cout << "Enter your last name: ";
        cin >> Lname;
    cout << "Enter the first letter of your gender: ";
        cin >> sex;
    cout << "Enter your age: ";
        cin >> age;
    cout << "Enter your body temperature in Fahrenheit (F): ";
        cin >> bodyTemp;
    cout << "Enter your weight in pounds (lb): ";
        cin >> weight;
    cout << "Enter your height in feet (ft): ";
        cin >> feet;
    cout << "Enter your height in inches (in): ";
        cin >> inches;
    
	//outputs
	cout << "\nHello " + Fname + " " + Lname + "!" << endl; //First & Last name
    cout << Fname + "'s body temperature: " << bodyTemp << "F" << endl; //bodytemp
    cout << Fname + "'s gender: " << sex << endl; //gender 
    cout << Fname + " is " << age << " years old" << endl; //age
    cout << Fname + "'s height: " << feet << "`" << inches << "\"" << endl;  //height 
    cout << Fname + "'s weight: " << weight << "lb";
	return 0;
}