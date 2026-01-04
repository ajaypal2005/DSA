#include <iostream>
using namespace std;

int main() {
    int a = 8, b = 3;

    // Addition
    cout << "a + b = " << (a + b) << endl;
  
    // Subtraction
    cout << "a - b = " << (a - b) << endl;
  
    // Multiplication
    cout << "a * b = " << (a * b) << endl;
  
    // Division
    cout << "a / b = " << (a / b) << endl;
  
    // Modulo
    cout << "a % b = " << (a % b) << endl;
  
    // Increament
    cout << "++a = " << ++a << endl;
  
    // Decrement
    cout << "b-- = " << b--;

    // relational operators
    

    // Equal operator
    cout << "a == b is " << (a == b) << endl;
  
    // Greater than operator
    cout << "a > b is " << (a > b) << endl;
  
    // Greater than Equal to operator
    cout << "a >= b is " << (a >= b) << endl;
  
    //  Lesser than operator
    cout << "a < b is " << (a < b) << endl;
  
    // Lesser than Equal to operator
    cout << "a <= b is " << (a <= b) << endl;
  
    // Not equal to operator
    cout << "a != b is " << (a != b);


    // Logical Operators
    bool x = true, y = false;
    cout << "(x && y) is " << (x && y) << endl; // Logical AND
    cout << "(x || y) is " << (x || y) << endl;
    cout << "(!x) is " << (!x) << endl; // Logical NOT

    // Bitwise Operators
    int p = 5;  // Binary: 0101
    int q = 3;  // Binary: 0011
    cout << "p & q = " << (p & q) << endl; // Bitwise AND
    cout << "p | q = " << (p | q) << endl; // Bitwise OR
    cout << "p ^ q = " << (p ^ q) << endl; // Bitwise XOR
    cout << "~p = " << (~p) << endl;       // Bitwise NOT
    cout << "p << 1 = " << (p << 1) << endl; // Left shift
    cout << "p >> 1 = " << (p >> 1) << endl; // Right shift

    
    return 0;
}