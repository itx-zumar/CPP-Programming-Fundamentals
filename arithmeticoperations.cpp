#include<iostream>
using namespace std;
int main(){
    int num1, num2, sum, sub, mul;
    float div;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = (float)num1 / num2;

    cout << "Sum: " << sum << endl;
    cout << "Subtraction: " << sub << endl;
    cout << "Multiplication: " << mul << endl;
    cout << "Division: " << div << endl;

    return 0;
}