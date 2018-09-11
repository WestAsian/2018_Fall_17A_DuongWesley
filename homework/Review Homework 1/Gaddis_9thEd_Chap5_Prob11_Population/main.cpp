/* 
 * File:   main.cpp
 * Author: Wesley Duong 
 * Created on September 10, 2018, 10:01 PM
 * Purpose:  Population
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
    float nuOfOrg; //Number Of Organisms
    int daysMul;   //Days Multiply
    float dailyIn; //Daily Increase
    
    //Initialize Variables
  
    //Process/Map inputs to outputs
     nuOfOrg = nuOfOrg + (nuOfOrg * dailyIn/100);

    //Output data
    cout << "Enter the starting number of organisms: ";
    cin>> nuOfOrg;
    while(nuOfOrg < 2){
        cout << "The starting number of organisms must be at least 2.";
        cout << "Enter the starting number of organisms: ";
        cin >> nuOfOrg;
    }
    cout << "Enter the average daily population increase (as a percentage): ";
    cin >> dailyIn;
    while(dailyIn < 0){
        cout << "The average daily population increase must be a positive value.";
        cout << "Enter the average daily population increase (as a percentage): ";
        cin >> dailyIn;
    }
    cout << "Enter the number of days they will multiply: ";
    cin >> daysMul;
    while(daysMul < 1){
        cout << "The number of days must be at least 1.";
        cout << "Enter the number of days they will multiply: ";
        cin >> daysMul;
    }
    for (int count = 0; count != daysMul; count++){
        cout<< "On day " << count + 1 << " the population size was " 
                << nuOfOrg << "." << endl;

    }


    //Exit stage right!
    return 0;
}