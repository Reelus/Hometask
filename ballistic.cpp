#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double angle_degrees;
    double velocity;
    const double g = 9.8;

    cout << "ballistics calculator" << endl;
    cout << "=====================" << endl;

    cout << "angle: ";
    cin >> angle_degrees;

    cout << "velocity: ";
    cin >> velocity;

    double angle_radians = angle_degrees * M_PI / 180.0;

    double range = (velocity * velocity * sin(2 * angle_radians)) / g;

    double max_height = (velocity * velocity * sin(angle_radians) * sin(angle_radians)) / (2 * g);
    double flight_time = (2 * velocity * sin(angle_radians)) / g;

    cout << "\n--- Results ---" << endl;
    cout << "distance: " << range << " meters" << endl;
    cout << "maximum height: " << max_height << " meters" << endl;
    cout << "flight time: " << flight_time << " seconds" << endl;

    return 0;
}