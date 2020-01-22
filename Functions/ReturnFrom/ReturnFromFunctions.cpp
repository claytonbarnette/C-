// ReturnFromFunctions.cpp

// Include IO from the Standard Template Library
#include <iostream>
// Declare the namespace you are using
using namespace std;

// Function definition
int DemoTextOutput();

// Main Function Call
int main()
{

    // Write text to screen from main
    cout << "This text is written from the main function." << endl;
    

    // Return from Funcion for main
    return DemoTextOutput();

}

// Function implimentation
int DemoTextOutput()
{

    // Output Text to the screen from this function
    cout << "This Demo text is from inside the function" << endl;

    // Return from function for main
    return 0;
}