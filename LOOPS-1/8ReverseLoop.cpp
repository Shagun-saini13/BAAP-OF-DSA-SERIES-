#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=5 ; i>=1 ; i--){
        cout<<i<<endl;
    }

    //we can also initialize outside
    int i=1;
    for( ; i<=5 ; i++){
        cout<<i<<endl;
    }
}