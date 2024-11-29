#include <iostream>
#include <string>
using namespace std;

int main() {
    //Question take 4*4 2d array and prints its loop
     string array[4][4]={
        {"S","A","A","D"},
        {"A","I","R","A"},
        {"J","O","H","N"},
        {"M","A","Y","A"}
    };
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++ ){
        cout<<array [i][j]<<" ";}
        cout<<"\n";
    }

    

    return 0;
}