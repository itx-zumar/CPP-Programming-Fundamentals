#include<iostream>
using namespace std;
int main(){
    float principal, rate, time, simple_interest;
    cout << "Enter the principal amount: ";
    cin >> principal;   
    cout << "Enter the annual interest rate (in %): ";
    cin >> rate;
    cout << "Enter the time (in years): ";
    cin >> time;
    simple_interest = (principal * rate * time) / 100;
    cout << "The simple interest is: " << simple_interest << endl;
    return 0;
}