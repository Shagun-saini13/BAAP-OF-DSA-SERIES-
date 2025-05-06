#include<iostream>
using namespace std;
int main(){
    int x = 5;
    if(x++ == 5) // 5 == 5
    {
        cout<<"Five";
    }
    //PostIncrement x++ = 6 
    else{
        if(++x == 6) //PreIncrement ++x = 7
        {
            cout<<"Six";
        }
    }
    // Five will be printed
}