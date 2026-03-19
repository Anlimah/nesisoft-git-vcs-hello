#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    int num1, num2;
    
    // Prompt the user for two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Perform arithmetic operations and display results
    int sum = add(num1, num2);
    cout << "Sum: " << sum << endl;

    return 0;
}