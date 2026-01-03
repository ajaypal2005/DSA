// basic syntax for a C++ program

#include <iostream>  //header file for input and output
using namespace std; // namespace declaration
int main()           // execution starts from here
{
    cout << "Hello, World!" << endl; // body of the program
    return 0;

    // variable declaration and initialization
    int a = 10;
    float b = 5.5;
    char c = 'A';

    // output the values
    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Character: " << c << endl;

    return 0;

    //  basic data types in C++
    int integerVar = 42;             // Integer type
    float floatVar = 3.14f;          // Floating-point type
    double doubleVar = 2.718281828;  // Double-precision floating-point type
    char charVar = 'C';              // Character type
    bool boolVar = true;             // Boolean type
    string stringVar = "Hello, C++"; // String type

    // derived data types
    int arr[5] = {1, 2, 3, 4, 5}; // Array

    // user-defined data types
    struct Person
    { // Structure
        string name;
        int age;
    };
    class Basics
    {
    }; // Class

    return 0;
}
