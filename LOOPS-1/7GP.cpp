//Display this GP- 1,2,4,8,16,32.... upto 'n' terms
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Ener the Number: ";
    cin>>n;
    int a=1;
    for(int i=1; i<=n ; i++){
        cout<<a<<endl;
        a*=2;
    }
}