#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a Number: ";
    cin>>a;

    if(a>=100 && a<=999){
        cout<<a<<" is a Three Digit Number";
    }
    else{
        cout<<a<<" is not a Three Digit Number";
    }
}