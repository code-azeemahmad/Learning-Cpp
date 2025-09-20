#include <iostream>
using namespace std;

int calculateSum(int);
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int oddSum = calculateSum(num);
    cout << "Sum of all odd numbers from 1 to " << num << ": " << oddSum;

    return 0;
}

int calculateSum(int num)
{
    int sumOdd = 0;
    for (int count = 1; count <= num; count++)
    {
        if (count%2 != 0)
        {
            sumOdd+=count;
        }
    }
    return sumOdd;
}