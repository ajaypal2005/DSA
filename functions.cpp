#include <iostream>
using namespace std;
void demonstrateFunctions() {
    // Simple function to demonstrate function definition and calling
    auto add = [](int x, int y) {
        return x + y;
    };

    int num1 = 5, num2 = 10;
    cout << "The sum of " << num1 << " and " << num2 << " is " << add(num1, num2) << endl;
}
