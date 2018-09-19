/* 
 * File:   main.cpp
 * Author: Wesley Duong
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Adding Binary 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int numbers;
    int binary;
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"Enter the number = ";
    cin>>numbers;
    cout<<"The binary that equalizer to "<<numbers<<" is ";
    while (numbers > 0)
    {
        binary = numbers % 2;
        cout << binary;
        numbers /= 2;
    }
    //Exit
    return 0;
}

