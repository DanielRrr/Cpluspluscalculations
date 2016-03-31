#include <iostream>
using namespace std;
int main() {
  int a, i, c;
  a = -1;
  i = 0;
  c = 0;
  while (a != 0) {
    cin >> a;
    if (a == 0) break;
    if (i < a) {
        i = a;
        c = 1;
    }
    else if (i == a) c = c + 1;
}
  cout << c;
  return 0;
}
