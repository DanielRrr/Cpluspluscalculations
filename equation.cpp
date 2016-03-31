#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, x1, x2, dis, zero;
    cout << setprecision(6) << fixed;
    zero = 1.0e-15;
    cin >> a >> b >> c;
    dis = b*b - 4*a*c;
    if (dis > zero) {
        x1 = (-b - sqrt(dis)) / (2 * a);
        x2 = (-b + sqrt(dis)) / (2 * a);
        if (x1 < x2) cout << x1 << " " << x2;
        else cout << x2 << " "  << x1;
    }
    else if (fabs(dis) <= zero) {
        if (fabs(b) <=  zero) cout << 0;
        else {
            x1 = -b / (2 * a);
            cout << x1;
        }
    };
    return 0;
}
