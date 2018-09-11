/* 
 * File:   main.cpp
 * Author: Wesley Duong 
 * Created on September 10, 2018, 10:21 PM
 * Purpose:  Currency 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
    const float YNPRDOL=93.93;//yen per dollar
    const float EUPRDOL=0.74; //euros per dollar
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float usdDols;//US Dollar
    float usYen;  // Us dollar to yen
    float usEuro; // Us dollar to euros 
    //Initialize Variables
  
    //Process/Map inputs to outputs
    usYen=usdDols*YNPRDOL;
    usEuro=usdDols*EUPRDOL;
    //Output data
    cout<<"Enter U.S Dollar amount = ";
    cin>>usdDols;
    cout<<"Conversion to Yen = "<<usdDols*YNPRDOL<<endl;
    cout<<"Conversion to Euros = "<<usdDols*EUPRDOL<<endl;
    //Exit stage right!
    return 0;
}