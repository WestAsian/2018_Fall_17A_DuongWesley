/* 
 * File:   main.cpp
 * Author: Wesley Duong 
 * Created on March 22, 2018, 10:21 PM
 * Purpose:  Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int SIZE = 20;
//Function Prototypes
int binSech(char *[], int, string);
void sortArray(char *[],int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int NUM_NAMES = 20;
    string *[NUM_NAMES] = {"Collins, Bill","Smith, Bart","Allen, Jim",
            "Griffin, Jim",
    "Stamey, Marty","Rose, Geri","Taylor, Terri", 
        "Johnson, Jill",
    "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
        "James, Jean",
    "Weaver, Jim", "Pore, Bob", "Rutherford, Greg",
        "Javens, Renee",
    "Harrison, Rose", "Setzer, Cathy", "Pike, Gordon",
        "Holland, Beth"};
    string search;
    int results;
    
    //Search a names 
    cout<<"Enter the names you want to search for: ";
    cin>> search;
    
    //Sort the name
    sortArray(names, SIZE);
    
    //Search for a name
    results = binSech(names, SIZE, search);

    //If binarySearch returned -1, the name was not found
    if (results == -1){
        cout<<"That name does not exist in the array."<<endl;
    }else{
        cout<<" Name "<<search<<" was found in element "
                <<results<<" of the array."<<endl;
    }
    
    //Exit stage right!
    return 0;
}
void sortArray(char *string[], const int size){
    int pass, i;
    char *temp;
    for (pass=0; pass < size - 1; pass++)
   {
      for (i=0; i<size - 1; i++)
      {
         if (strcmp(string[i], string[i+1]) > 0)
         {
            temp = string[i];
            string[i] = string[i+1];
            string[i+1] = temp;
         }
      }
   }
}
int binSech(char *string[], int size, int value){
    int first = 0,
        last = size - 1,
        middle,
        pos = -1;//position
    bool found = false;
 
    while (!found && first <= last){
        middle = (first + last) / 2;
        if (string[middle] == value){
            found = true;
            pos = middle;
        }
        else if (string[middle] > value){
            last = middle - 1;
        }else
            first = middle + 1;
    }
    return pos;
}

 

