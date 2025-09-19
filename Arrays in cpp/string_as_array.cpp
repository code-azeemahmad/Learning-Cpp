#include <iostream>
using namespace std;

bool check(string, char);
int main()
{
    string word;
    char letter;
    cout << "Enter a word: ";
    cin >> word;
    cout << "Enter a letter to find: ";
    cin >> letter;
    bool isFound = check(word, letter);
    if (isFound)
    {
        cout << letter << " is found in the word";
    }
    else 
    {
        cout << letter << " isn't found in the word!";
    }
}

bool check(string word, char letter)
{
    bool isFound = false;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == letter)
        {
            isFound = true;
            break;
        }
    }
    return isFound;
}


/*
string word = "C++";
    for (int i = 0; word[i] != '\0'; i++)
    {
        cout << word[i];
    }     
*/