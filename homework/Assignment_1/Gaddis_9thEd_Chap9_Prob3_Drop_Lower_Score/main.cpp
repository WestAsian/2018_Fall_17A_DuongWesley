/* 
 * File:   main.cpp
 * Author: Wesley Duong 
 * Created on September 17, 2018, 11:20 PM
 * Purpose:  Drop Lowest Score
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void arSelSo(float *, int);
void shArPtr(float *, int);
void showAvg(float, int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float  *scores,total;
    int numScore;
    //Initialize Variables
    total = 0.0;
   //Dynamically allocate an array large enough to hold that many test scores
	scores = new float[numScore];
	if (scores == NULL)
		return 0;
      
        //Get the number of test scores.
	cout << "How many test scores would you like to process?";
	cin >> numScore;

        //Get the test score for each test
	cout << "Enter the test scores below.\n";
	
	for (int count = 0; count < numScore; count++){
            cout << "Test score #" << (count + 1) << ": ";
		cin >> *(scores + count);	
	}
	//Calculate the total scores
	for (int count = 0; count < numScore; count++){
		total += *(scores + count);
	}
	showAvg(total, numScore);
        
	//sort the elements of the array pointers
	arSelSo(scores, numScore);
	cout << "The test scores in ascending order are: \n";
	shArPtr(scores, numScore);
	
	//Free memory.
	delete[] scores;
	scores = 0;
        
    //Output data
    
    //Exit stage right!
    return 0;
}
void arSelSo(float *array, int size){
	int temp;
	bool swap;
	do{
            swap = false;
		for (int count = 0; count < (size - 1); count++){
			if (*(array + count) > *(array + count + 1)){

				temp = *(array + count);
				*(array + count) = *(array + count + 1);
				*(array + count + 1) = temp;
				swap = true;
			}
		}
	} while (swap);
}

// sort function
void shArPtr(float *array, int size){
	for (int count = 0; count< size; count++)
		cout << *(array + count) << " ";
	cout << endl;
}

// average function
void showAvg(float total, int numScore){
	float average;

	//Calculate the average
	average = total / numScore;
	

	//Display the results.
	cout << fixed << showpoint << setprecision(2);
	cout << "Average Score: " << average << endl;

}