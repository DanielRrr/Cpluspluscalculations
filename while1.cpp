#include <iostream>
using namespace std;
int main() {
  int n, i;
  cin >> n;
  i = 1;
  while (i * i <= n) {
    cout << i * i << " ";
    i = i + 1;
}
  return 0;
}
