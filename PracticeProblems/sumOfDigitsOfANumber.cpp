#include <iostream>
using namespace std;

int calculateSum(int);
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int digitSum = calculateSum(num);
    cout << "The sum of all digits is: " << digitSum;
    return 0;
}
int calculateSum(int num)
{
    int digitSum = 0;
    int mod = 0;
    while (num > 0)
    {
        mod = num % 10;
        digitSum += mod;
        num = num / 10;
    }
    return digitSum;
}