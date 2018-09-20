/* 
 * File:   main.cpp
 * Author: Wesley Duong
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Adding Binary 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int length(char);
bool digitAdd(int,int,int &,bool=false);
int sizeResult(int ,int );
bool numberAdd(int ,int ,int );
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int numbers1, numbers2;
    int binary1,binary2;
    int result[sizeResult(binary1 ,binary2)];
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"Enter the number = ";
    cin>>numbers1;
    cout<<"Enter the number = ";
    cin>>numbers2;
    cout<<"The binary that equalizer to "<<numbers1<<" is ";
    while (numbers1 > 0)
    {
        binary1 = numbers1 % 2;
        cout << binary1;
        numbers1 /= 2;
    }
    cout<<endl;
    
        cout<<"The binary that equalizer to "<<numbers2<<" is ";
    while (numbers2 > 0)
    {
        binary2 = numbers2 % 2;
        cout << binary2;
        numbers2 /= 2;
    }
        bool x=numberAdd(binary1,binary2,result);
    if(x)cout<<"overflow"<<endl;
    else cout<<result<<endl;
    //Exit
    return 0;
}
bool numberAdd(int n1,int n2,int r){
    //Initialize the result array
    r[sizeResult(n1,n2)-1]='\0';
    for(int i=0;i<=sizeResult(n1,n2)-2;i++){
        r[i]='0';
    }
    //Start the counters
    int rcnt=sizeResult(n1,n2)-2;
    int n1cnt=length(n1)-1;
    int n2cnt=length(n2)-1;
    //Added the first digit
    bool c=digitAdd(n1[n1cnt--],n2[n2cnt--],r[rcnt--]);
    do{
    if(n1cnt<0&&n2cnt<0)return c;
    else if(n1cnt<0)c=digitAdd('0',n2[n2cnt--],r[rcnt--],c);
    else if(n2cnt<0)c=digitAdd(n1[n1cnt--],'0',r[rcnt--],c);
    else c=digitAdd(n1[n1cnt--],n2[n2cnt--],r[rcnt--],c);
    }while(true);
}
int sizeResult(int n1,int n2){
    int size1=length(n1);
    int size2=length(n2);
    if(size1>size2)return size1+1;
    return size2+1;
}
bool digitAdd(int n1,int n2,int &d,bool c){
    int i1=n1-48,i2=n2-48;
    int sum=i1+i2+c;
    d=sum%2+48;
    return sum/2;
}

int length(char a){
    int cnt=0;
    do{}while(a[cnt++]!='\0');
    return cnt-1; 
}