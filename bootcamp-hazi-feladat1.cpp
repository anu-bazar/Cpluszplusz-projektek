#include <iostream>

using namespace std;

int main() {
    char operation;
    float num1, num2;

    cout << "Enter operator either + or - or * or /: ";
    cin >> operation;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(operation) {
        case '+':
            cout << num1 + num2;
            break;

        case '-':
            cout << num1 - num2;
            break;

        case '*':
            cout << num1 * num2;
            break;

        case '/':
            if(num2 == 0) {
                cout << "Error! Cannot divide by zero";
            } else {
                cout << num1 / num2;
            }
            break;

        default:
            cout << "Error! Invalid operator";
            break;
    }

    return 0;
}

