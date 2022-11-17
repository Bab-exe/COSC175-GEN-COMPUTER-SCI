#include <iostream>

using namespace std;

template<typename T,size_t size>
void display(T const (&array)[size]){
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}
template <typename T,size_t size1,size_t size2>
void display_2D(T const (&array)[size1][size2]){
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
template <typename T,size_t size1,size_t size2,size_t size3>
void display_3D(T const (&array)[size1][size2][size3]){
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            for(int k = 0; k < size3; k++){
                cout << array[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}
int main() {
    int array_2D[3][3] = {{1,2,3},{4,5,6}};

    int array[] = {1,6,3,4,5,6};
    int array_3D[3][3][5] = {{{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}}};

    display_3D<int>(array_3D);
     
}