// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char op = ' ';
    int num1 = 0;
    int num2 = 0;
    int result = 0;

    cout << "Hello! What operator woild you like to use in your calculation?\nOperator: ";
    cin >> op;

    cout << "Alright, what is the first number you would like to use?\nFirst Number: ";
    cin >> num1;

    cout << "And the second number?\nSecond number: ";
    cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = (double)num1 / (double)num2;
            break;
        default:
            cout << "Sorry but that is not valid, guess you suck";
            return 1;
    }
    cout << "The result of " << num1 << op << num2 << " is " << result;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
