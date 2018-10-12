// C++ program to find sum of all even or odd numbers in given range using recursion //
#include <stdio.h >
using namespace std;

// declaration //
int sumOfEvenOdd(int start, int end);


int main()
{
    int start, end, sum;

    // Input lower and upper limit from user //
    cout<<"Enter lower limit:";
    cin>> "start";
    cout<<"Enter upper limit:";
    cin>> "end";
    
    cout<<"Sum of even/odd numbers between %d to %d=%    d"<<endl; 
    cout<<start<<end<<sum;
    
    return 0;
}



/**
 * Find sum of all even or odd numbers recursively.
 */
int sumOfEvenOdd(int start, int end) 
{
    /* Base condition */
    if(start > end)
        return 0;
    else
        return (start + sumOfEvenOdd(start + 2, end));
}
