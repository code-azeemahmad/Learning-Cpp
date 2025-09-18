#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20, c = 3;
    float z;
    z = a + 100 / b * c;
    cout << z;
}

/*
PEMDAS Rule:
() > Expo > Mul = Div > Add = Sub

Operators with same precedence order: solve from left to right
    100 / 2 * 5
    ---->
*/