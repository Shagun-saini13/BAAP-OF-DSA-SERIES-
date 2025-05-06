//write a program to check whether a character is an alphabet or not
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<" Enter a Character: ";
    cin>>ch;

    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
        cout<<ch<<" is an Alphabet";
    }
    else{
        cout<<ch<<" is not an alphabet";
    }
}