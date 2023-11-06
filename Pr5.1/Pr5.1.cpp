#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

double g(const double x, const double y);

int main()
{
    double s, t;
    cout << "s = "; cin >> s;
    cout << "t = "; cin >> t;

    double c = g(s, t) - 1 + pow(g(pow(t, 2), s), 2) / pow(g(pow(s, 2) + pow(t, 2), 1), 2);
    cout << "c = " << c << endl;
    return 0;
}

double g(const double x, const double y)
{
    return (x / (pow(y, 2)) - sin(y / (pow(x, 2))));
}