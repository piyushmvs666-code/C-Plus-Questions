// Input two numbers and print their sum, difference, product, quotient, and remainder.
#include <iostream>
using namespace std;

int main() {
    // Variable declarations
    int num1, num2, result;

    // Prompt user for input
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // 1. Calculate and print Sum
    result = num1 + num2;
    cout << "Sum: " << result<<endl ;

    // 2. Calculate and print Difference
    result = num1 - num2;
    cout << "Difference: " << result << endl;

    // 3. Calculate and print Product
    result = num1 * num2;
    cout << "Product: " << result << endl;

    
        // 4. Calculate and print Quotient
        result = num1 / num2;
        cout << "Quotient: " << result << endl;

        // 5. Calculate and print Remainder
        result = num1 % num2;
        cout << "Remainder: " << result << endl;
    

    return 0;
}
