#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int record;
    cout << "How many records do you want to enter? ";
    cin >> record;
    string Name[record];
    float GPA[record];
    char Section[record];
    for (int i = 0; i < record; i++)
    {
        cout << "Enter Name: ";
        cin >> Name[i];
        cout << "Enter GPA: ";
        cin >> GPA[i];
        cout << "Enter Section: ";
        cin >> Section[i];
    }
    cout << "Name" << "|" << "\t" << "GPA" << "|" << "\t" << "Section" << endl;
    for (int i = 0; i < record; i++)
    {
        cout << Name[i] << "|" << "\t" << GPA[i] << "|" << "\t" << Section[i] << endl; 
    }
    getch();
}