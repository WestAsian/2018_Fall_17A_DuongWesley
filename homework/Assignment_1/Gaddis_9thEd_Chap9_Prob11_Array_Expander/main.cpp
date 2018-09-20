/* 
 * File:   main.cpp
 * Author: Wesley Duong 
 * Created on September 19, 2018, 11:10 PM
 * Purpose:  Array Expander
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes Here
int *expandSize (int*, int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE = 10;											
	int ary [SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};				
	int* num = ary;													

	for(int index= 0;index<SIZE;index++)
		cout<<num[index]<<endl;
	

	num = expandSize(ary, SIZE);	

	for(int index=0;index<SIZE;index++)
		cout<<num[index]<<endl;

	delete[] num;	
	num = 0;		
    //Exit
    return 0;
}
int *expandSize(int* arr, int size)
{
int *expandArray=new int[size * 2];

for (int index=0;index<size;index++)
expandArray[index]=arr[index];

for (int index=size;index<size*2;index++)
expandArray[index]=0;

return expandArray;
}