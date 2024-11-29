#include <iostream>
using namespace std;

int main() {
    //Question take 3*4 2d array as input and prints its values
     int matrix[3][4];
     cout<<"Enter the values for 3*4 value";
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++ ){
        cout<<"\nEnter a value for element index ["<<i+1<<"]["<<j+1<<"]: ";
        cin>> matrix[i] [j];
        }
        }
    cout<<"\n The matrix is: \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++ ){
            cout<<matrix [i][j]<<" ";
        }
        cout<<"\n";
        }

    return 0;
}


