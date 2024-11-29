#include <iostream>
using namespace std;

int main() {
    //Question 2d matrix 3*3 take input from user and fill array and calculate sum of all elements
     int matrix[3][3];
     int sum=0;
     cout<<"Enter the values for 3*3 value\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++ ){
        cout<<"Enter a value for element index ["<<i+1<<"]["<<j+1<<"]: ";
        cin>> matrix[i] [j];
        }       
    }
    cout<<"\n The matrix is: \n";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++ ){
        sum =sum+ matrix[i][j];
            }
        }
        cout<<"Sum of all matrix: "<<sum<<"\n";

    return 0;
}


