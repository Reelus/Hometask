#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Ice Cream Sandwich Checker" << endl;
    cout << "==========================" << endl;
    cout << "enter a string: ";
    cin >> str;

    int length = str.length();

    if (length % 2 == 0)
    {
        cout << "not an ice cream sandwich" << endl;
        return 0;
    }

    if (length < 3)
    {
        cout << "too short" << endl;
        return 0;
    }

    int middle = length / 2;

    bool is_sandwich = true;

    for (int i = 0; i < middle; i++)
    {

        if (str[i] != str[length - 1 - i])
        {
            is_sandwich = false;
            break;
        }

        if (str[i] == str[middle])
        {
            is_sandwich = false;
            break;
        }
    }

    if (is_sandwich)
    {
        cout << "correct" << endl;
        cout << "left side: ";
        for (int i = 0; i < middle; i++)
        {
            cout << str[i];
        }
        cout << endl;
        cout << "middle: " << str[middle] << endl;
        cout << "right side: ";
        for (int i = middle + 1; i < length; i++)
        {
            cout << str[i];
        }
        cout << endl;
    }
    else
    {
        cout << "not an ice cream sandwich" << endl;
    }

    return 0;
}