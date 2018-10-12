
// Recursive C++ program to check if the number is palindrome or not //

#include <iostream> 
using namespace std; 
  
// recursive function //
int rev(int a, int temp) 
{ 
    // base case //
    if (a == 0) 
        return temp; 
  
    // stores the reverse of a number //
    temp = (temp * 10) + (a % 10); 
  
    return rev(a / 10, temp); 
} 
  
// running Code //
int main() 
{ 
  
    int a = 313; 
      
    int temp = rev(a, 0); 
    
    if (temp == n) 
        cout << "yes" << endl; 
    else
        cout << "no" << endl; 
    return 0; 
} 

