#include <iostream>
using namespace std;
int main() {
  int a, b, n, d;
  cin >> a;
  cin >> b;
  cin >> n;
  d = (a * 100 + b) * n;
  cout << d / 100 << " " << d % 100;
  return 0;
}
