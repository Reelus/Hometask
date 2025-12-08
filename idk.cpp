#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;

    cout << "quadratic equation: ax^2 + bx + c = 0" << endl;
    cout << "coefficient a: ";
    cin >> a;

    cout << "coefficient b: ";
    cin >> b;

    cout << "coefficient c: ";
    cin >> c;

    if (a == 0)
    {
        cout << "a cannot be 0" << endl;
        return 0;
    }

    double discriminant = b * b - 4 * a * c;

    cout << "\ndiscriminant d = " << discriminant << endl;

    if (discriminant > 0)
    {

        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "x1,2:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (discriminant == 0)
    {

        double x = -b / (2 * a);

        cout << "one real root:" << endl;
        cout << "x = " << x << endl;
    }
    else
    {

        cout << "no real roots" << endl;

        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);

        cout << "complex roots:" << endl;
        cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}