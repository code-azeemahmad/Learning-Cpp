#include <iostream>
using namespace std;

int Calculate(int, int, string);
int main()
{
    int a, b;
    string op;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter the Operation (+, -, *, /): ";
    cin >> op;
    cout << "Enter Second Number: ";
    cin >> b;
    cout << "The calculated amount is: " << Calculate(a, b, op);

}

int Calculate(int a, int b, string op) 
{
    if (op == "+") 
    {
        return a + b;
    }
    else if (op == "-") 
    {
        return a - b;
    }
    else if (op == "*") 
    {
        return a * b;
    }
    else if (op == "/") 
    {
        return a / b;
    }
}