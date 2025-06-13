#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double R, M, B, w0, r, L, F0, beta, tau;
    cin >> R >> M >> B >> w0 >> r >> L >> F0 >> beta >> tau;


    double I_disk = 0.5 * M * R * R;

    double Omega_crit = sqrt((B*B*R*R + beta*r)/(L*I_disk));

    double DeltaE = 0.5*I_disk*w0*w0*(1 - exp(-(B*B*R*R + beta)*tau/(I_disk*r)));


    double I_tau = (B*R*w0/r)*(1 - exp(-r*tau/L));

    cout << fixed << setprecision(3);
    cout << Omega_crit << endl << DeltaE << endl << I_tau << endl;

    return 0;
}
