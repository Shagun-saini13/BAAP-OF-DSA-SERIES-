//take a number inputt and tell the number is divisible by 7 or not
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num%7==0)
    {
        cout<<"Number is divisible by 7";
    }
    else{
        cout<<"Number is not divisible by 7";
    }
}