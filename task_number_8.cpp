#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double R, m0, k, eta, w0, eps, x0, t_star, mu;
    cin >> R >> m0 >> k >> eta >> w0 >> eps >> x0 >> t_star >> mu;

    double mu_crit = 2*sqrt(k*(m0 - mu*t_star)) - 2*M_PI*eta*R*R;

    double w_t = w0 + eps*t_star*t_star;

    double P = 2*M_PI*eta*R*x0*x0*w_t*w_t*exp(-mu*t_star/(m0 - mu*t_star));

    cout << fixed << setprecision(3);
    cout << mu_crit << endl << w_t << endl << P << endl;

    return 0;
}
