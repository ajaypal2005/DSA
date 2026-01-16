#include <iostream>
using namespace std;
// Simple function to demonstrate function definition and calling
//
// here x and y are parameters passed to the function
void add(int x, int y)
{

    cout << x + y;
};

int main()
{
    add(5, 10);
    return 0;
}
// arguments vs parameters:
// parameters are the variables defined in the function definition
// arguments are the actual values passed to the function when it is called

// Example:
// void add(int x, int y)  --> x and y are parameters
// add(5, 10);             --> 5 and 10 are arguments

