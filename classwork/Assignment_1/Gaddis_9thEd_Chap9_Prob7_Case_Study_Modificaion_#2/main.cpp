/* 
 * File:   main.cpp
 * Author: Wesley Duong 
 * Created on September 18, 2018, 7:21 PM
 * Purpose:  Case Study Modification #2
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void getDonations(float *, const int);
void initPtrArray(float *[], float *, const int);
void arrSelectSort(float *[], const int);
void displayArray(const float *, const int);
void showArrPtr(float *[], const int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
   float *donations = nullptr;
   float **arrPtr = nullptr;
    //Input or initialize values Here
     int numDonations = 0;

   cout << "\n\t\tCK Graphics United Cause Donations\n\n"
        << "\tEnter the number of donations we collected: ";
   cin >> numDonations;
    /* Dynamically allocated array */
   donations = new float[numDonations];

   /* Array of pointers to double*/
   arrPtr = new float *[numDonations];

   /* Initializes arrPtr */
   initPtrArray(arrPtr, donations, numDonations);

   /* Gets the donations from the user */
   getDonations(donations, numDonations);

   /* Sorts the array with an selection sort algorithm */
   arrSelectSort(arrPtr, numDonations);

   /* Displays the donations using the array of pointers in
      sorted order */
   showArrPtr(arrPtr, numDonations);

   /* Display the donations in sorted order */
   displayArray(donations, numDonations);

   /* Frees the memory */
   delete[] arrPtr;
   delete[] donations;

   donations = nullptr;
   arrPtr = nullptr;

   pauseSystem();
    //Exit
    return 0;
}

void initPtrArray(float *arrPtr[], float *donations, const int numDonations)
{
   for (int index = 0; index < numDonations; index++)
   {
      *(arrPtr + index) = { nullptr };
   }

   for (int index = 0; index < numDonations; index++)
   {
      *(arrPtr + index) = &donations[index];
   }
}

void getDonations(float *donations, const int numDonations)
{
   cout << "\n";
   for (int index = 0; index < numDonations; index++)
   {
      cout << "\tDonation #" << setw(3) << right << (index + 1) 
         << ": $ ";
      cin >> *(donations + index);
   }
}

void displayArray(const float *donations, const int numDonations)
{
   int index = 0;

   cout << "\n\tThe donations, in their original order are: \n";
   for (int index = 0; index < numDonations; index++)
   {
      cout << "\n\tDonation #" << setw(3) << right 
           << (index + 1) << ": $ ";
      cout << setw(8) << right << *(donations + index) << " ";
   }
}

void arrSelectSort(float *arrPtr[], int numDonations)
{
   int startScan = 0,
       maxIndex = 0;

   float *maxElem;

   for (startScan = 0; startScan < (numDonations - 1); startScan++)
   {
      maxIndex = startScan;
      maxElem = arrPtr[startScan];

      for(int index = startScan + 1; index < numDonations; index++)
      {
         if (*(arrPtr[index]) > *maxElem)
         {
            maxElem = arrPtr[index];
            maxIndex = index;
         }
      }
      arrPtr[maxIndex] = arrPtr[startScan];
      arrPtr[startScan] = maxElem;
   }
}

void showArrPtr(float *arrPtr[], const int numDonations)
{
   cout << fixed << showpoint << setprecision(2);

   cout << "\n\tThe donations, sorted in descending order are: \n";

   for (int index = 0; index < numDonations; index++)
   {
      cout << "\n\tDonation #" << setw(3) << right << (index + 1) 
           << ": $ ";
      cout << setw(8) << right << *(arrPtr[index]) << " ";
   }
   cout << "\n";
}