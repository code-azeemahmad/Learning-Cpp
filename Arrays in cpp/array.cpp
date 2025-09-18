#include <iostream>
using namespace std;

int main()
{
    int stu_num = 10;
    int stu[stu_num];
    for (int i = 0; i < stu_num; i++)
    {
        cout << "Enter Student Marks: ";
        cin >> stu[i];
    }
    for (int i = 0; i < stu_num; i++)
    {
        cout << stu[i] << endl;
    }

}