//Display this AP- 1,3,5,7,9 upto 'n' terms 
#include<iostream>
using namespace std;
int main(){
    //Method 1
    //Formula- Tn = a+(n-1)d
    //Tn = a+dn-d, if d = 2 and a = 1
    //Tn = 2*n-1

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    for(int i=1; i<=2*n-1; i+=2)
    {
        cout<<i<<endl;
    }
       
        

    //Method 2
    /*
    int i, a=1;
    for(i=1; i<=n; i++)
    {
        cout<<a<<endl;
        a+=2;
    }
    */

   
   //Print 2,7,12---
   /*
   int i, a=2;
   for(i=1;i<=n;i++)
   {
        cout<<a<<endl;
        a+=5;
   }
   */
   
    
}