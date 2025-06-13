#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double C0, alpha, L, R, E0, q0, tau, omega;
    cin >> C0 >> alpha >> L >> R >> E0 >> q0 >> tau >> omega;

    if (C0 <= 0 || L <= 0 || tau < 0) {
        cerr << "Ошибка: недопустимые параметры системы" << endl;
        return 1;
    }

    double discriminant = 1.0/(L*C0) - pow(R/(2*L), 2);
    double omega_crit = (discriminant > 0) ? sqrt(discriminant) : 0;

    double W = 0.5 * q0 * q0 / C0 * (1 - exp(-R * tau / L));


    double q_tau = q0 * exp(-R * tau / (2 * L));
    if (omega_crit > 1e-9) {
        q_tau *= cos(omega_crit * tau);
    }

    cout << fixed << setprecision(3);
    cout << omega_crit << endl << W << endl << q_tau << endl;

    return 0;
}
