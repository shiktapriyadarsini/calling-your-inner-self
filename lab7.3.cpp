    // To print even or odd numbers in the given range //
    #include <iostream>
    using namespace std;
     
    // Function declaration
    void printevenodd(int curr, int limit);
     
    int main()
    {
        int lowerLimit, upperLimit;
     
        // Inputting lower and upper limit from user //
        cout<<"Enter lower limit: ";
        cin>>lowerLimit;
        cout<<"Enter upper limit: ";
        cin>>upperLimit;
        cout<<"Even/odd Numbers from "<<lowerLimit <<" to "<<upperLimit<<endl;
        printevenodd(lowerLimit, upperLimit);
     
        return 0;
    }
     
     
    // Recursive function to print even or odd numbers in a given range. //
     
    void printevenodd(int curr, int limit)
    {
        if(curr > limit)
            return;
     
        cout<<curr<<endl;
     
        // Recursively call to printevenodd to get next value
        printevenodd(curr + 2, limit);
    }
