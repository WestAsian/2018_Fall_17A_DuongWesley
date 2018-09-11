/* 
 * File:   main.cpp
 * Author: Wesley Duong 
 * Created on September 10, 11:50 AM
 * Purpose:  Calculation of the Sales Prediction
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const float MILLN=1.0e06f;//Million
const int PRCNT=100;      //Conversion of percent

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float prtosal, salYear, salTotl;
    
    //Initialize Variables
    salYear=8.6*MILLN;
    prtosal=58;
    
    //Process/Map inputs to outputs
    salTotl=salYear/prtosal;
    
    //Output data
    cout<<"Sale this Year = $"<<salYear<<endl;
    cout<<"Percent of the Total Sale"<<prtosal/PRCNT<<"%"<<endl;
     
    //Exit stage right!
    return 0;
}