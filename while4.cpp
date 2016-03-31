#include <iostream>
using namespace std;
int main() {
  int a;
  cin >> a;
  while (a > 1) {
    if (a % 2 == 0) a = a / 2;
    else break;
}
    if (a > 1) cout << "NO";
    else cout << "YES";
  return 0;
}
