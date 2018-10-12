// C++ program to generate nth Fibonacci term using recursion //

// using main function //
#include<iostream>
using namespace std;
 
// declaration //
int fibonacci(int n)
// statements //
{
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}
 
// drive code //
int main()
{
    int n,i=0;
    cout<<"Input the number of terms for Fibonacci Series:";
    cin>>n;
    cout<<"\nFibonacci Series is as follows\n"<<endl;
 
    while(i<n)
    {
        cout<<" "<<fibonacci(i)<<endl;
        i++;
    }
 
    return 0;
}
