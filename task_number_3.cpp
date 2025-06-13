#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double R, M, m, w0;
    cin >> R >> M >> m >> w0;

    double I0 = 0.5 * M * R * R + m * R * R;
    double I1 = 0.5 * M * R * R;
    double w = (I0 * w0) / I1;
    double A = 0.5 * I1 * w * w - 0.5 * I0 * w0 * w0;

    cout << fixed << setprecision(2);
    cout << w << "\n" << A << "\n";
    return 0;}
}
