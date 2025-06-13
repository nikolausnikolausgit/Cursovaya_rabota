#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double m1, m2, h, alpha_deg, mu, e;
    cin >> m1 >> m2 >> h >> alpha_deg >> mu >> e;

    const double g = 9.81;
    double alpha_rad = alpha_deg * M_PI / 180.0;
    double a = g * (sin(alpha_rad) - mu * cos(alpha_rad));

    cout << fixed << setprecision(2);

    if (a <= 0 || h <= 0) {
        cout << "0.00\n0.00\n0.00\n0.00\n";
        return 0;
    }

    double v1 = sqrt(2 * a * h);
    double u1 = ((m1 - e * m2) * v1) / (m1 + m2);
    double u2 = ((1 + e) * m1 * v1) / (m1 + m2);

    cout << v1 << "\n" << u1 << "\n" << u2 << "\n";

    if (mu <= 0) {
        cout << "inf\n";
    } else {
        double S = (u2 * u2) / (2 * mu * g);
        cout << S << "\n";
    }

    return 0;
}
