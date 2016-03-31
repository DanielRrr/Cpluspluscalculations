#include <iostream>
using namespace std;
int main() {
  int a, i;
  a = -1;
  i = 0;
  while (a != 0) {
    cin >> a;
    if (a == 0) break;
    i = i + a;
}
  cout << i;
  return 0;
}
