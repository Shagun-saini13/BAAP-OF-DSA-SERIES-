#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a Number: ";
    cin>>a;

    if(a%5==0 || a%3==0){
        if(a!=15){
            cout<<a<<" is divisible by 5 or 3 but not divisible by 15";
        }
        else{
            cout<<a<<" is divisible by 5 or 3 as well as 15";
        }
    }
    else{
        cout<<a<<" is not divisible by 5 and 3";
    }
}