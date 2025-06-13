#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double m, M, h, V0;
    cin >> m >> M >> h >> V0;

    const double g = 9.81;
    double vy = sqrt(2 * g * h) * m / (m + M);
    double vx = M * V0 / (m + M);
    double Q = 0.5 * m * 2 * g * h + 0.5 * M * V0 * V0 - 0.5 * (m + M) * (vx * vx + vy * vy);

    cout << fixed << setprecision(2);
    cout << vx << "\n" << vy << "\n" << Q << "\n";
    return 0;
}
