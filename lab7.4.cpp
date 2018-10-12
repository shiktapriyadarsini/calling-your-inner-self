// find sum of all natural numbers between 1 to n //

// main function //
#include<iostream>
using namespace std;

// declaration //
int add(int a);

int main()
{
    int a;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Sum =  " << add(n);

    return 0;
}

int add(int a)
{
    if(n != 0)
        return a + add(a - 1);
    return 0;
}
