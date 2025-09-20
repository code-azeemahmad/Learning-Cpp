/*
Unary Operators

Increment:
        a++     (first initialize, then update)     post increment
        ++a     (first update, then initialize)     pre increment

Decrement:
        a--
        --a
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = a++;
    cout << "b: " << b << endl;     // 10
    cout << "a: " << a << endl;     // 11

    int c = 10;
    int d = ++c;
    cout << "d: " << d << endl;     // 11
    cout << "c: " << c;             // 11

    return 0;
}



/*    
            int a = 10    
                _____
                |   |
                |   |
            int b = a++      
                |     |______  a = a + 1; (then increments 1 to its own value)
                |
              b = 10
  (first initializes b to value of a)

__________________________________________________________________________________

            int a = 10    
                _____
                |   |
                |   |
            int b = ++a      
                |     |______  a = a + 1; (first increments 1 to its own value)
                |
              b = 10
  (then initializes b to value of a)

 */