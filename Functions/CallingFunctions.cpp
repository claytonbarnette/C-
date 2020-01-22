// CallingFunctions.cpp

// Include IO from the Standard Template Library
#include <iostream>
// Declare the namespace you are using
using namespace std;

// Declare a function definitions at the top of the file because functions need to be defined before called.
int DemoTextOutput();

// Main Function Call
int main()
{

    // Write text to screen from main
    cout << "This text is written from the main function." << endl;

    // Call the function declared above
    DemoTextOutput();

    // Return from main
    return 0;

}

// Function implimentation
int DemoTextOutput()
{

    // Output Text to the screen from this function
    cout << "This Demo text is from inside the function" << endl;

    // Return from function
    return 0;
}