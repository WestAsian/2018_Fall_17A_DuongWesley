/* 
 * File:   main.cpp
 * Author: Wesley Duong 
 * Created on September 12, 2018, 3:30 PM
 * Purpose:  Median Function
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float findMedian(int[],int);
void arraySort(int[], int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int a[] = {1, 2, 8, 6, 7};
    cout << findMedian(a,5) << endl;

    //Output data
     cout << findMedian(a,5) << endl;
     
    //Exit stage right!
    return 0;
}
float findMedian(int numPtr[], int numStudents){
    float median = 0.0;
    
    arraySort(numPtr,numStudents);

    int mid = 0;
       if((numStudents % 2) == 0){
        mid = (numStudents / 2) - 1;
        median = (numPtr[mid] + numPtr[mid + 1]) / 2;
    }
    else
    {
mid = (int)(numStudents / 2);
        median = numPtr[mid];
    }
    return median;
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

 
