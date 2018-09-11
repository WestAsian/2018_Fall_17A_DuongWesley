/* 
 * File:   main.cpp
 * Author: Wesley Duong
 * Created on September 10, 2018, 11:43 PM
 * Purpose:  Rock Paper Scissor
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables 
    char p1,p2;
    
    //Initialize Variables
    p1=rand()%3+'R';
    p1=p1>'S'?'P':p1;
    p2=rand()%3+'R';
    p2=p2>'S'?'P':p2;    
    
    //Player Choice
    cout<<"Rock Paper Scissor Game"<<endl;
    cout<<"Player 1 = "<<p1<<endl;
    cout<<"Player 2 = "<<p2<<endl;
    
    //Determine the winner
    if(p1==p2){
        cout<<"The game is a tie"<<endl;
    }else if (p1=='P'){
            if(p2=='S'){
                    cout<<"Player 2 wins"<<endl;
            }else{
                cout<<"Player 1 wins"<<endl;
            }
    }else if(p1=='S'){
        if(p2=='R'){
            cout<<"Player 2 wins"<<endl;
        }else{
            cout<<"Player 1 wins"<<endl;
        }
    }else if(p1=='R'){
        if(p2=='P')
            cout<<"Player 2 wins"<<endl;
        }else{
            cout<<"Player 1 wins"<<endl;
        }
    //Output Located Here
    

    //Exit
    return 0;
}

