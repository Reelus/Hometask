#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Spiral Numbers Generator" << endl;
    cout << "========================" << endl;
    cout << "number of rows: ";
    cin >> rows;

    cout << "number of columns: ";
    cin >> cols;

    int matrix[rows][cols];

    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;

    int number = 1;

    while (top <= bottom && left <= right)
    {

        for (int i = left; i <= right; i++)
        {
            matrix[top][i] = number;
            number++;
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            matrix[i][right] = number;
            number++;
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                matrix[bottom][i] = number;
                number++;
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                matrix[i][left] = number;
                number++;
            }
            left++;
        }
    }

    cout << "\nspiral:\n"
         << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}