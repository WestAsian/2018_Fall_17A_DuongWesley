/* 
 * File:   main.cpp
 * Author: Wesley Duong 
 * Created on September 10, 2018, 10:21 PM
 * Purpose: Days in a Months
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int months;
    int year;
    int days;
  
    //Process/Map inputs to outputs
    if(months == 4|| months == 6|| months == 9|| months == 11){
        days = 30;
    }else if(months == 2)
	{bool leapyear=(year % 4 == 0 && year % 100 != 0)||(year % 400 == 0);
		if (leapyear == 0)
		days = 29;  
             else 
		days = 29;}
    else
        days =31;
    
    //Output data
    cout<<"Enter a Months = ";
    cin>>months;
    cout<<"Enter a Year = ";
    cin>>year;
    cout<<days<<" days"<<endl;
    
    //Exit stage right!
    return 0;
}