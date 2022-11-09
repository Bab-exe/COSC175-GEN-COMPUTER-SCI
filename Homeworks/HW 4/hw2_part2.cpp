#include <iostream>

using namespace std;


double Diff(double number1,double number2); 

int main(){
    cout << Diff(4,4.1); 
      
}

/* Write a function (i.e., function definition) called Diff that receives two parameters (number1, number2); and calculates the difference of number2 being subtracted from number1; and then returns the difference.*/
//dif
float Diff(float number1,float number2){
    return (number1 - number2);
}