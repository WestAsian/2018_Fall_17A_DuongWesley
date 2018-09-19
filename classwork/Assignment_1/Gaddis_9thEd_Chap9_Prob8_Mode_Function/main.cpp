/* 
 * File:   main.cpp
 * Author: Wesley Duong 
 * Created on September 12, 2018, 2:53 PM
 * Purpose:  Mode Problem
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int findMode(int *, int);
float findMedian(int [], int);
void arraySort(int *, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE = 100;   //maximum movies seen in a month size
    int numStudents, count, mode;
    int *numPtr;        //pointer
    float median;
  
    //Process/Map inputs to outputs
     cout << "How many students were surveyed?: ";
    cin >> numStudents;
    while(numStudents < 0)
    {
        cout << "Error! Enter a positive number of students :";
        cin >> numStudents;
    }
    numPtr = new int[numStudents]; // numPtr points to array

    for (int count = 0; count < numStudents; count++)
    {
        cout << "Enter number of movies seen for student " 
                << (count + 1) << ": ";
        cin >> *(numPtr + count);
        while(*(numPtr + count) < 0)
        {
            cout << "Error! Enter a positive number of movies seen :";
            cin >> *(numPtr + count);
        }
    }
    
    //Sorting the array
    arraySort(numPtr, numStudents);

    //Counting
    for (count = 0; count < numStudents; count++) //display the numbers
    {
        cout << *numPtr;
        if (count != (numStudents - 1))
            cout << ", ";
        else
            cout << endl;
        numPtr++;
    }
    
    //Mode
    mode = findMode(numPtr, numStudents);
    cout << "The mode is " << mode;
    
    //Median
median = findMedian(numPtr, numStudents);
    cout << "\nThe median is " << median;
    
    //Exit stage right!
    return 0;
}

void arraySort(int array[], int numStudents)
{
    int startScan;
    int minIndex;
    int minElem;
    for (startScan = 0; startScan < (numStudents - 1); startScan++)
    {
        minIndex = startScan;
        minElem = *(array + startScan);
        for (int index = startScan + 1; index < numStudents; index++)
        {
            if ((*(array + index)) < minElem)
            {
                minElem = *(array + index);
                minIndex = index;
            }
        }
        *(array + minIndex) = *(array + startScan);
        *(array + startScan) = minElem;
    }
}
float findMedian(int numPtr[], int numStudents){
    float median = 0;
 
    if(numStudents % 2 == 0)
    {
        median = (*(numPtr  + (numStudents / 2)) - 1) + *(numPtr  + (numStudents / 2));
        median /= 2;
    }
    else
    {
        median = *(numPtr  + (numStudents / 2));
    }
    return median;
}

int findMode(int array[], int numStudents){
    int mode = -1, position = 0, highest;
    int frequency[SIZE];
 
    for(int i = 0; i < numStudents; i++)     //initailize all frequencies to 0
        *(frequency + i) = 0;
    
    for (int k = 0; k < numStudents; k++)
    {
        for (int i = 1; i < numStudents; i++)
        {
            if (*(array + k) == *(array + i) && &*(array + k) != &*(array + i))  //avoid counting itself in the scan
                *(frequency + k) += 1;               //increment the frequency of current number
        }
    }
 
    for(int i = 0; i < numStudents; i++)
    {                                           //test freq array
        cout << *(frequency + i);
        if (i != (numStudents - 1))
            cout << ", ";
        else
            cout << endl;
    }
     
    highest = *(frequency + 0);
    for (int count = 1; count < numStudents; count++)    // get position of highest number
    {
        if (*(frequency + count) > highest)
        {
            highest = *(frequency + count);
            position =+ count;              //get postion in frequency array, to put into numbers array
        }
    }
    for(int i = 0; i < numStudents; i++)
        if(*(frequency + i) != *(frequency + (i + 1)) && (i + 1) < numStudents)
        {
            mode = *(array + position);
            return mode;    //returns number that occurs mos54
        }
    return mode;        //returns -1 if all same frequency
}
/*
Sample Output;
 
*/
