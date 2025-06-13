#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double m1, m2, v1, v2, k, c;
    cin >> m1 >> m2 >> v1 >> v2 >> k >> c;

    double mu = m1 * m2 / (m1 + m2);
    double v_rel = v1 - v2;
    double omega = sqrt(k / mu);
    double gamma = c / (2 * mu);

    double x_max = v_rel / omega * exp(-gamma * M_PI / (2 * omega));

    double u1 = (m1 - m2) / (m1 + m2) * v1 + 2 * m2 / (m1 + m2) * v2;
    double u2 = 2 * m1 / (m1 + m2) * v1 + (m2 - m1) / (m1 + m2) * v2;

    double DeltaE = 0.5 * mu * v_rel * v_rel * (1 - exp(-gamma * M_PI / omega));

    cout << fixed << setprecision(2);
    cout << x_max << "\n" << u1 << "\n" << u2 << "\n" << DeltaE << "\n";
    return 0;
}
