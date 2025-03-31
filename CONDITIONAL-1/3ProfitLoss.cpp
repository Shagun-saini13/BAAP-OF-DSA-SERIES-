#include<iostream>
using namespace std;
int  main(){
    int cp,sp;
    cout<<"Enter Cost Price: ";
    cin>>cp;
    cout<<"Enter Selling Price: ";
    cin>>sp;

    if(sp>cp){
        cout<<"it's Profit of: ";
        cout<<sp-cp;
    }
    else{
        cout<<"it's Loss of: ";
        cout<<cp-sp;

    }
}