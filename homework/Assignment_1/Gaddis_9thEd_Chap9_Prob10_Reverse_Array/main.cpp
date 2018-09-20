/* 
 * File:   main.cpp
 * Author: Wesley Duong 
 * Created on September 19, 2018, 10:50 PM
 * Purpose:  Reverse Array
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes Here
void printArray(int [], int );
void rvereseArray(int [], int , int );
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int arr[] = {1, 2, 3, 4, 5, 6};
     
    // To print original array
    printArray(arr, 6);
     
    // Function calling
    rvereseArray(arr, 0, 5);
     
    cout << "Reversed array is" << endl;
     
    // To print the Reversed array
    printArray(arr, 6);
    //Exit
    return 0;
}
void rvereseArray(int arr[], int start, int end){
    if (start >= end)
    return;
     
    int temp = arr[start]; 
    arr[start] = arr[end];
    arr[end] = temp;
     
    // Recursive Function calling
    rvereseArray(arr, start + 1, end - 1); 
}     
 
void printArray(int arr[], int size){
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
} 