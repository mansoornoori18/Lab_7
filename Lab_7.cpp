#include<iostream>     // COMSC-210 | Lab 5 | Mansoor Noori
using namespace std;   // IDE Visual Studio,

// function to display the element of Arrays
void displayArray(string* arr, int size){
    for (int i = 0; i < size; i++){
         cout << *(arr + i) << " ";
    }
   cout << endl;

}

// Function to reverse the elements of the array
string* reverseArray(string* arr, int size) {
    for (int i = 0; i < size / 2; i++) {
        string temp = *(arr + i);
        *(arr + i) = *(arr + size - 1 - i);
        *(arr + size - 1 - i) = temp;
    }
    return arr;
}
int main(){
    int size = 5;
    
    // Dynamically allocate string array
    string* names = new string[size];

    // feed the array with names 
    


    cout << "hello" << endl;

    return 0;
    
}