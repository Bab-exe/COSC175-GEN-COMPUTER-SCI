/*
	Lab 1 
	Blessing Abumere
	9/7/2022 3:20pm
	GEN COMPUTER SCI (COSC175006)-1224
*/
#include <iostream>
#include <string>
using std::cout;
using std::string;

template <typename T>

T print (T var){
	cout << var;
	return var;
}
	

int main(){
	int array[] = {1,2,3,4,5,6,79,8,9};
	int *pArray = array;
	print(pArray);
}