#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double m, alpha_deg, h, mu;
    cin >> m >> alpha_deg >> h >> mu;

    double alpha_rad = alpha_deg * M_PI / 180.0;
    double tan_alpha = tan(alpha_rad);

    if (mu >= tan_alpha) {
        cout << "0.00\n0.00";
        return 0;
    }

    double L = h / sin(alpha_rad);
    double A_tr = mu * m * 9.81 * cos(alpha_rad) * L;
    double v = sqrt(max(0.0, 2 * 9.81 * h - 2 * A_tr / m));
    double S = (v * v) / (2 * mu * 9.81);

    cout << fixed << setprecision(2) << v << "\n" << S;
    return 0;
}
