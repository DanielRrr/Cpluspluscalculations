#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
	int a, b;
	char c;
	cout << "Print some equation\n\n";
	cin >> a;
	cin >> c;
	cin >> b;
	if (c == '+') { cout << a + b; }
	else if (c == '-') { cout << a - b; }
	else if (c == '*') { cout << a * b; }
	else if (c == '^') { cout << pow(a,b); }
	else if (c == 'mod') { cout << a % b; }
	else if (c == '/' && b != 0) { cout << a / b; }
	else if (b == 0) { cout << "Don't divide on zero"; }
	return 0;
}
