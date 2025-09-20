/*
Type Casting:
            Converting data from one type to another
                 ____________|______________          
                 |                         |
            Conversion                  Casting
            (implicit)                 (explicit)
           small to big               big to small
          float to double             double to int
          compiler auto               manually force

*/


#include <iostream>
using namespace std;

int main()
{
    char grade = 'A';       // ASCII value = 65
    int value = grade;
    cout << value << endl;

    double price = 100.99;
    int newPrice = (int)price;
    cout << newPrice;

    return 0;
}