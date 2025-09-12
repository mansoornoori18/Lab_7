#include<iostream>     // COMSC-210 | Lab 5 | Mansoor Noori
using namespace std;   // IDE Visual Studio,

// function to display the element of Arrays
void displayArray(string* arr, int size){
    for (int i = 0; i < size; i++){
         cout << *(arr + i) << " ";
    }
   cout << endl;

}


int main(){


    cout << "hello" << endl;

    return 0;
    
}