#include <iostream>
using namespace std;
int min(int a, int b) {
	if (a < b)
		return a;
	else 
		return b;
}
int min4(int x, int y, int z, int v) {
	if (min(x, y) == x && min(x, z) == z && min(x, v) == x) {
		return x;
    if (min(y, x) == y && min(y, z) == y && min(y, v) == y) {
		return y;
    if (min(z, x) == z && min(z, y) == z && min(z, v) == z) {
		return z;
    if (min(v, x) == v && min(v, y) == z && min(v, z) == v) {
		return v;
	}
	}
	}
	}
}
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << min4(a, b, c, d);
	return 0;
}
