#include <iostream>
using namespace std;

int add(int, int);      // function prototype
int main()
{
    int a, b, c;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    c = add(a, b);      // arguments
    cout << "The sum is: " << c;
}

int add(int a, int b)       // parameters
{   int c;
    c = a + b;
    return c;
}

/*

            |               |
            |               |
            |_______________|
            |               |
            |     add()     |
            |               |
            |     int c     |
            |_______________|  __   
            |               |    |   
            |     main()    |    |   
            |               |    |--> STACK frame   
            |  int a, b, c  |    |   
            |_______________|  __|   
                  STACK

*/