/* 
 * File:   main.cpp
 * Author: Wesley Duong
 * Created on September 10, 2018, 2:28 PM
 * Purpose:  Celsius to Fahrenheit
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
    float fahrenh;//Fahrenheit
    float celsius;//Celsius
  
    //Input or initialize values Here
    
    //Process/Calculations Here
    celsius=(5/9)*(fahrenh-32);
    //Output Located Here
    cout<<"Fahrenheit Temperature = ";
    cin>>celsius;
    cout<<"Fahrenheit Temperature to Celsius Temperature = "
            <<(5/9)*(fahrenh-32)<<endl;

    //Exit
    return 0;
}

