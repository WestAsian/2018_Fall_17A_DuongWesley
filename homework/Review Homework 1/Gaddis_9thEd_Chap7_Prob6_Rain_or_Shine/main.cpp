/* 
 * File:   main.cpp
 * Author: Wesley Duong 
 * Created on September 10, 2018, 10:42 PM
 * Purpose:  Rain or Shine
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int CNSTMON = 3;
const int CNSTDYS = 30;
//Function Prototypes
void getMetData(char[][CNSTDYS]);
void getCount(const char raOrShe[][CNSTDYS]);
int getMostR(const int[]);
void displayReport(const int[], const int, const int[], const int, 
                   const int[], const int, const int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
char raOrShe[CNSTMON][CNSTDYS] = { };
    //Initialize Variables
   getMetData(raOrShe);
    //Process/Map inputs to outputs
    
    //Output data
     pauseSystem();
    //Exit stage right!
    return 0;
}
void getMetData(char raOrShe[][CNSTDYS])
{
   /* Declare: File stream object */
   ifstream metData;

   /* Variables: Months, Days */
   int months = 0,
       days = 0;

   /* Open: File "RainOrShine.txt" */
   metData.open("RainOrShine.txt");
   if (metData)
   {
      for (months = 0; months < CNSTMON; months++)
      {
         for (days = 0; days < CNSTDYS; days++)
         {
            metData >> raOrShe[months][days];
         }
      }

      /* Call: getCount */
      getCount(raOrShe);
   }
   else
   {
      cout << "An error occured. The file could not be opened and/or\n"
           << "read. Make sure the file exists, the filename is\n"
           << "'RainOrShine.txt', and that the file is not damaged, and\n"
           << "the file has not been moved from the program directory.\n"
           << "\nPress Enter to close this window ...\n";
   }

   /* Close: File "RainOrShine.txt" */
   metData.close();
}
void getCount(const char raOrShe[][CNSTDYS])
{
   /* Array variables: Frequency sunny days, Frequency rainy days,
                       Frequency cloudy days */
   int frequencyS[CNSTMON] = { }, 
       frequencyR[CNSTMON] = { }, 
       frequencyC[CNSTMON] = { };

   /* Variables: Total sunny days, Total rainy days, Total cloudy days,
                 Months, Days (loop counters), Month name */
    int totalS = 0,
        totalR = 0,
        totalC = 0,
        days = 0,
        months = 0,
        monthName = 0;
    for (months = 0; months < CNSTMON; months++)
   {      
      for (days = 0; days < CNSTDYS; days++)
      {
         raOrShe[months][days] == 'S' ? frequencyS[months] += 1 :
            raOrShe[months][days];

         raOrShe[months][days] == 'R' ? frequencyR[months] += 1 :
            raOrShe[months][days];

         raOrShe[months][days] == 'C' ? frequencyC[months] += 1 :
            raOrShe[months][days];
      }

      totalS += frequencyS[months];
      totalR += frequencyR[months];
      totalC += frequencyC[months];
   }

   /* Call: getMostR, displayReport */
   monthName = getMostR(frequencyR);
               displayReport(frequencyS, totalS, frequencyR, totalR, 
                             frequencyC, totalC, monthName);
}
int getMostR(const int frequencyR[])
{
   /* Variables: Month name, Largest amount, Months (loop counter) */
   int monthName = 0,
       largestAmount = 0,
       months = 0;

   /* This loop determines which month was the one with most
      rainy days. Once it is found, largestAmount gets frequencyR[],
      and monthName gets the value of that month. */
   for (months = 0; months < CNSTMON; months++)
   {
      if (frequencyR[months] > largestAmount)
      {
         largestAmount = frequencyR[months];
         monthName = months;
      }
   }

   /* Return: monthName */
   return monthName;
}
void displayReport(const int frequencyS[], const int totalS, 
                   const int frequencyR[], const int totalR, 
                   const int frequencyC[], const int totalC, 
                   const int monthName)
{
   /* Constant: Character name */
   const int CHAR_NAME = 3;

   const string mNamae[CNSTMON] = { "June", "July", "August" };
   char charName[CHAR_NAME] = { 'S', 'R', 'C' };

   /* Variables: Months, Count (loop counters) */
   int months = 0,
       cnt = 0;

   /* Display: The report */
   cout << "\t\tMETEOROLOGIC REPORT\n"
      << "\t\t-------------------\n\n\n"
      << "MONTHLY SUMMARY:\n";

   for (months = 0; months < CNSTMON; months++)
   {
      cout << "\n" << mNamae[months] << ":\n"
           << "\n-------------------------------------------------\n";

      cout << "Sunny Days: " << setw(3) << right 
           << frequencyS[months] << "\t";
      for (cnt = 0; cnt < frequencyS[months]; cnt++)
      {
         cout << " " << charName[0];
      }
      cout << "\n-------------------------------------------------\n";

      cout << "Rainy Days: " << setw(3) << right 
           << frequencyR[months] << "\t";
      for (cnt = 0; cnt < frequencyR[months]; cnt++)
      {
         cout << " " << charName[1]; 
      }
      cout << "\n-------------------------------------------------\n";
   
      cout << "Cloudy Days: " << setw(2) << right 
           << frequencyC[months] << "\t";
      for (cnt = 0; cnt < frequencyC[months]; cnt++)
      {
         cout << " " << charName[2]; 
      }
      cout << "\n-------------------------------------------------\n";
   }

   cout << "\n\nTHREE MONTH SUMMARY:\n"
        << "\n-------------------------------------------------"
        << "--------------------------------------------\n";

      cout << "Sunny Days: " << setw(3) << right << totalS << "\t";
      for (cnt = 0; cnt < totalS; cnt++)
      {
         cout << " " << charName[0];
      }
      cout << "\n-------------------------------------------------"
         << "--------------------------------------------\n";

      cout << "Rainy Days: " << setw(3) << right << totalR << "\t";
      for (cnt = 0; cnt < totalR; cnt++)
      {
         cout << " " << charName[1];
      }
      cout << "\n-------------------------------------------------"
           << "--------------------------------------------\n";

      cout << "Cloudy Days: " << totalC << "\t";
      for (cnt = 0; cnt < totalC; cnt++)
      {
         cout << " " <<  charName[2];
      }
      cout << "\n-------------------------------------------------"
           << "--------------------------------------------\n\n";
      
      cout << "\nMONTH WITH MOST RAIN:\n\n" << mNamae[monthName] << "\n"
           << "-------------------------------------------------\n";
      for (months = 0; months < 1; months++)
      {
         cout << "Rainy Days: " << frequencyR[monthName] << "\t";
         for (cnt = 0; cnt < frequencyR[monthName]; cnt++)
         {
            cout << " " << charName[1];
         }
         cout << "\n-------------------------------------------------\n";
      }
}