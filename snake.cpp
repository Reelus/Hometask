#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "column number: ";
    cin >> rows;

    cout << "lines number: ";
    cin >> cols;

    cout << "\nresult:\n"
         << endl;

    int number = 1;

    for (int i = 0; i < rows; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << number << " ";
                number++;
            }
        }
        else
        {
            int start = number;
            number += cols;
            for (int j = cols - 1; j >= 0; j--)
            {
                cout << (start + j) << " ";
            }
        }

        cout << endl;
    }

    return 0;
}