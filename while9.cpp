#include <iostream>
using namespace std;
int main() {
  int n, ff0, i = 1, f = 1, f0 = 0;
  cin >> n;
  while (i < n) {
    ff0 = f;
    f = f0 + f;
    f0 = ff0;
    i = i + 1;
}
  cout << f;
  return 0;
}
