#include <iostream>

using std::cout;

double Diff(double number1,double number2); 

int main(){
    cout << Diff(4,4.1); 
      
}

/* Write a function (i.e., function definition) called Diff that receives two parameters (number1, number2); and calculates the difference of number2 being subtracted from number1; and then returns the difference.*/
//dif
double Diff(double number1,double number2){
    return (number1 - number2);
}