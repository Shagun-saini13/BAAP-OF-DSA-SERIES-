//Taking an integer input and tell if it is divisible by 5 and 3
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a Number: ";
    cin>>a;

    if(a%5==0 && a%3==0){
        cout<<a<<" is Divisible by 5 as well as 3";
    }
    else{
        cout<<a<<" is not Divisible by 5 and 3";
    }
}