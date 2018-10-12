/*write a c++ program to find power of any natural number using recursion.*/

#include<iostream>
using namespace std;
int pow(int x,int y);
int main(){
    int a,b,c;
    cout<<"Enter the number";
    cin>>a;
    cout<<"Enter the power";
    cin>>b;
  
   p=pow(a,b);
   cout<<a<<"par power"<<b<<" = "<<c<< endl;
 }
 int pow(int num,int b)
 { 
    if(b==0)
      return 1;
    else
      return num*pow(num,b-1);
  }

