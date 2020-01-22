// ReturnVoidFunctions.cpp
#include<iostream>
// Using namespace for Standard Template Library
using namespace std;

// Define of function
void DemoVoidFunction();

// main function
int main()
{
    // Call of DemoVoidFunction()
    DemoVoidFunction();

    return 0;
}

// Function definition which returns void, just printing out a string to the screen.
void DemoVoidFunction()
{
    cout << "Returning from a void function, called by main." << endl;
}