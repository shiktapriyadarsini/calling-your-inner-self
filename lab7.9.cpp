// C++ program to find factorial of any number using recursion //
// using main function //
#include<iostream>
using namespace std;

int factorial(int n);

// processing //
int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial(n);
    cout << endl;
    return 0;
}

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
