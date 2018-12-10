/* 
 * File:   main.cpp
 * Author: Wesley Duong
 * Created on October 3, 2018, 2:28 AM
 * Purpose:  Dominion??
 */

//System Libraries Here
#include <iostream> 
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here
#include "Card.h"
//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const char NCARDS=10;//Card in  each players hands

//Function Prototypes Here
void filPlry(char [][NCARDS],char);
void prntDck(char [],char,char);
void prntPly(char [][NCARDS], char);
void shuffle(char [],char);
void bubble(char [],char);
void filMny(char [],char);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed 
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    const char NPLYS=3; // Number of player. 
    const char NBONZ=60-(3*7);// 60-(3*7) Copper Treasure Card. $1
    const char NSIVL=40;// 40 Silver Treasure Card. $2
    const char NGOLD=30;// 30 Golds Treasure Card. $3
    const char NESTS=24-(3*3);// 24-(3*3) Estates Victory Card. 1 pointer 
    const char NDUCH=12;// 12 Duchies Victory Card. 3 pointer
    const char NPROV=12;// 12 Provinces Victory Card. 6 pointer
    char discard;
    
    char cards[NPLYS][NCARDS];
    
    //Input or initialize values Here
      filPlry(cards,NPLYS);
      
    // Check the fills
      prntPly(cards,NPLYS);
      
    //Making sure we did not lose any of the card

    
    //Output Located Here
    

    //Exit
    return 0;
}

void filPlry(char c[][NCARDS],char n){
    //Loop for both players
    for(int ply=0;ply<n;ply++){
        //Each player gets 7 bronze cards
        for(int card=0;card<7;card++){
            c[ply][card]='B';
        }
        //Each player get 3 1 pt cards
        for(int card=7;card<NCARDS;card++){
            c[ply][card]='E';
        }
    }
}

void prntDck(char d[],char n,char perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<d[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
void prntPly(char p[][NCARDS], char n){
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<NCARDS;j++){
            cout<<p[i][j]<<" ";
        }
         cout<<endl;
    }
}
void shuffle(char c[],char n){
    for(int shfl=1;shfl<10;shfl++){
        for(int card=0;card<n;card++){
            int random=rand()%n;
            char temp=c[card];
            c[card]=c[random];
            c[random]=temp;
        }
    }
}
void bubble(char d[],char n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(d[j]>d[j+1]){
                char temp=d[j];
                d[j]=d[j+1];
                d[j+1]=temp;
            }
        }
    }
}