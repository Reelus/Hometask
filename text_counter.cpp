#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    cout << "enter text: ";
    getline(cin, text);
    cout << "line length: " << text.length() << endl;
    return 0;
}
