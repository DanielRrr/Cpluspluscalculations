#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, x1, x2, dis, zero;
    cin >> a >> b >> c;
    dis = b*b - 4*a*c;
    if (dis > 0) {
        x1 = (-b - sqrt(dis)) / (2 * a);
        x2 = (-b + sqrt(dis)) / (2 * a);
        cout << x1<< " "  << x2;
    }
    else if (dis == 0) {
            x1 = -b / (2 * a);
            x2 = -b / (2 * a);
            cout << x1 << " " << x2;
        }
    else {
    cout << "No real roots";
    }
    return 0;
}
