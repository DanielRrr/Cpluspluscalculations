#include <iostream>
using namespace std;
int main() {
   int a, i, x;
   cin >> a;
   i = a;
   x = a;
     while (i > 1) {if (a % i == 0) {x = i;}
      i = i - 1;}
      cout << x;
  return 0;
}
