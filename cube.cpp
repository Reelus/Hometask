#include <iostream>
using namespace std;

int main()
{
    int width, height;
    cout << "lenght: ";
    cin >> width;
    cout << "height: ";
    cin >> height;
    cout << "\nresult:\n"
         << endl;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}