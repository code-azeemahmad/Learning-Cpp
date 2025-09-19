#include <iostream>
using namespace std;
void swap(int &n1, int &n2);

int main()
{
    int num1, num2;
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;
    cout << num1 << "\t" << num2 << endl;
    swap(num1, num2);
    cout << num1 << "\t" << num2 << endl;
}

void swap(int &n1, int &n2)
{
    int temp = n2;
    n2 = n1;
    n1 = temp;
}

// return multiple values
// no copies, modifies the original variables