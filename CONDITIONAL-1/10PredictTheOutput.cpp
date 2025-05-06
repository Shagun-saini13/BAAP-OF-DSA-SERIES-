//What should be the output of below C++ program if user enters a = 5
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;

    if(++a*5<=25)// a=5, ++a=6, 6*5<=25 ->false
    {
        cout<<"Hello";
    }
    else{
        cout<<"Bye";// Bye will be printed
    }
}