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
    fahrenh=(9/5)*celsius+32;
    //Output Located Here
    cout<<"Celsius Temperature = ";
    cin>>celsius;
    cout<<"Celsius TEmperature to Fahrenheit Temperature = "
            <<(9/5)*celsius+32<<endl;

    //Exit
    return 0;
}

