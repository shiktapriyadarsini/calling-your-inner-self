// C++ program to find sum of digits of a given number using recursion //

// using main function //
#include <iostream>
using namespace std;

// declaration //
int sumOfDig(int n)
{
    if(n==0){
        return 0;}
    
    else{
        return(n%10)+sumOfDig(n/10);
        
        }
    
    }
    // output //
int main(){
    
        int num;
        cout<<"\nEnter Number: ";
        cin>>num;
        cout<<"\nSum of Digits: "<<sumOfDig(num);
         return 0;
    
    }
