#include <iostream>
using namespace std;

int main() 
{
    int distance, time, speed;
    cout << "Enter Distance: ";
    cin >> distance;
    cout << "Enter Time: ";
    cin >> time;
    speed = distance / time;
    cout << "The calculated Speed is: " << speed << " meter per second";
}