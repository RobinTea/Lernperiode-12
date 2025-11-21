#include <iostream>
using namespace std;

int main() {
    char op;
    double numOne, numTwo, result;
    
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    
    cout << "Enter first number: ";
    cin >> numOne;
    
    cout << "Enter second number: ";
    cin >> numTwo;
    
    switch(op) {
        case '+':
            result = numOne + numTwo;
            cout << numOne << " + " << numTwo << " = " << result << endl;
            break;
            
        case '-':
            result = numOne - numTwo;
            cout << numOne << " - " << numTwo << " = " << result << endl;
            break;
            
        case '*':
            result = numOne * numTwo;
            cout << numOne << " * " << numTwo << " = " << result << endl;
            break;
            
        case '/':
            if(numTwo != 0) {
                result = numOne / numTwo;
                cout << numOne << " / " << numTwo << " = " << result << endl;
            } else {
                cout << "Error: Division by zero" << endl;
            }
            break;
            
        default:
            cout << "Error: Invalid operator" << endl;
            break;
    }
    
    return 0;
}