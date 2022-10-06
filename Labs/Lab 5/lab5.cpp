/* 
    Blessing Abumere
    10/5/2022
    COSC 175
*/

#include <iostream>
#include <string>

using namespace std; 

int main(){

    //input vars 
    float length; //room length
    float width; //room width

    //output vars
    float perimeter; //perimeter = 2 x (length + width)
    float area; //area = length x width

    cout << "Enter Length Of Room: " ;
        cin >> length;    
    cout << "Enter Width Of Room: ";
        cin >> width;
    
    perimeter = 2 * (length + width); //perimeter calc
    area = length * width; //area calc 

    cout << "\nThe Perimeter of a " << length << "ft long by " << width << "ft wide room is " << perimeter;
    cout << "\nThe Area of a " << length << "ft long by " << width << "ft wide room is " << area << " square feet";

    
    
    return 0;
}