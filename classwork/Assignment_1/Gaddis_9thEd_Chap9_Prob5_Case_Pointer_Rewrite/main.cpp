/* 
 * File:   main.cpp
 * Author: Wesley Duong 
 * Created on September 18, 2018, 10:59 PM
 * Purpose:  Rewrite Pointer
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
int doSomething(int *x, int *y)
{

int temp=*x;
*x= *y * 10;
*y = temp * 10;
return *x+*y;
}

int main()
{
int y,z;
cout << "Please enter a number" << endl;
cin >> y;
cout << "Please enter another number" << endl;
cin >> z;


doSomething(&y, &z);
doSomething(&y, &z);
cout << (y + z) << " = y(" << y << ") + z(" << z << ")'n" << endl;
system("Pause");
return 0;
}
return 0;}
