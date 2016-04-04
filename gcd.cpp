#include <iostream>
using namespace std;
int gcd(int a, int b) {
	while (b != 0) {
		int c = a % b;
		a = b;
		b = c;
	}
	return a;
}
int main() {
	int m, n;
	cin >> m >> n;
	cout << gcd(m, n);
	return 0;
}
