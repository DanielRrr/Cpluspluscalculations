#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  cout << (n / 3600) % 24 << ":" << ((n / 60) % 60) / 10 << ((n / 60) % 60) % 10 << ":" << (n % 60) / 10 << (n % 60) % 10;
  return 0;
}
