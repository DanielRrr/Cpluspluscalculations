#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a1, b1, c1, a2, b2, c2, x1, x2, d;
    cout << setprecision(6) << fixed;
    cin >> a1 >> b1 >> a2 >> b2 >> c1 >> c2;
    d = a1 * b2 - a2 * b1;
    x1 = (c1 * b2 - c2 * b1) / d;
    x2 = (c2 * a1 - c1 * a2) / d;
    cout << x1 << " " << x2;
    return 0;
}
