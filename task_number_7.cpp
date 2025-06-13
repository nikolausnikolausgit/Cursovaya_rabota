#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double R1, R2, M1, M2, k, mu, beta, w0, N, t_star;
    cin >> R1 >> R2 >> M1 >> M2 >> k >> mu >> beta >> w0 >> N >> t_star;

    double I1 = 0.5 * M1 * R1 * R1;
    double I2 = M2 * R2 * R2;

    double A = I1 + I2;
    double B = beta + mu * M2 * R2 * abs(R1 - R2);
    double C = k * (R1 - R2) * (R1 - R2);

    double w_t = w0 * exp(-B/(2*A)*t_star) * cos(sqrt(C/A - B*B/(4*A*A))*t_star);
    double eps_t = -w0 * exp(-B/(2*A)*t_star) *
                  (B/(2*A)*cos(sqrt(C/A - B*B/(4*A*A))*t_star) +
                  sqrt(C/A - B*B/(4*A*A))*sin(sqrt(C/A - B*B/(4*A*A))*t_star));

    double w_crit = 2*M_PI*N * sqrt(A*C) / (M_PI*B + sqrt(4*M_PI*M_PI*B*B + 16*A*C*N*N));

    double P = beta * w_t * w_t + mu * M2 * 9.81 * R2 * abs(w_t);

    cout << fixed << setprecision(3);
    cout << eps_t << endl;
    cout << w_crit << endl;
    cout << P << endl;

    return 0;
}
