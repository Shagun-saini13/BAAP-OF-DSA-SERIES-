//What and why Loop
//To print statement in repetitive manner we use Loops
//Types of LOOPS->
//1) For Loop
//2) While Loop
//3) do While Loop
//For(Initialization; condition; intcrement/decrement)

#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=1 ; i<=5 ; i++)
    {
        cout<<"Alpha Intern"<<endl;
    }
    for(int j=0 ; j<5 ; j+=3){
        cout<<j<<endl;
    }
}