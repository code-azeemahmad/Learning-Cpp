#include <iostream>
using namespace std;

int largestQuantity(int Car[5][5]) 
{
    int maximum = Car[0][0];
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            if (maximum < Car[i][j])        // 10 < 7   max remains same
            {
                maximum = Car[i][j];        // 10 < 12  update max to 12
            }
        }
    }
    return maximum;
}

int main() 
{
    int Car[5][5] = {
        {10,  7, 12, 10,  4},
        {18, 11, 15, 17,  2},
        {23, 19, 16, 12, 14},
        { 7, 12, 16,  0,  2},
        { 3,  5,  6,  2,  1}
    };

    cout << "Largest Quantity = " << largestQuantity(Car) << endl;
    return 0;
}


// In C++, when you pass an array to a function, it is passed by reference

