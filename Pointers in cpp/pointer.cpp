#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    cout << num << endl;
    cout << &num << endl;
    int *p;     // pointer declaration
    p = &num;   // pointer initialization
    cout << p << endl;
    cout << *p;     // pointer dereferencing
}