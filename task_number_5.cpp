#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double m1, m2, v1, v2, k, mu, c;
    cin >> m1 >> m2 >> v1 >> v2 >> k >> mu >> c;

    const double g = 9.81;
    double mu_red = m1 * m2 / (m1 + m2);
    double omega = sqrt(k / mu_red);
    double gamma = c / (2 * mu_red);
    double v_rel = v1 - v2;

    double x_max = exp(-gamma * M_PI / (2 * omega)) * v_rel / omega;
    double t_max = M_PI / (2 * omega);
    double delta_E = 0.5 * mu_red * v_rel * v_rel * (1 - exp(-gamma * M_PI / omega));

    cout << fixed << setprecision(2);
    cout << x_max << "\n" << t_max << "\n" << delta_E << "\n";
    return 0;
}
