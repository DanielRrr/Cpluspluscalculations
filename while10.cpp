#include <iostream>
using namespace std;
int main() {
  int a_prev, a, a_post, loc_max_1 = 0, loc_max_2 = 0, r_loc_min = INT32_MAX, i = 1;
  cin >> a_prev >> a;
  i = i + 1;
  if (a == 0) {
    cout << 0;
    return 0;
}
   cin >> a_post;
   i = i + 1;
   if (a_post == 0) {
    cout << 0;
    return 0;
}
    if (a > a_prev && a > a_post) {
    loc_max_1 = i - 1;
}
    while (a_post != 0) {
    a_prev = a;
    a = a_post;
    cin >> a_post;
    i = i + 1;
    if (a_post == 0) break;
    if (a > a_prev && a > a_post) {
    if (loc_max_2 > 0) {
        loc_max_1 = loc_max_2;
    }
        loc_max_2 = i - 1;
    }
    if (loc_max_2 - loc_max_1 < r_loc_min && loc_max_2 > 0 && loc_max_1 > 0) {
        r_loc_min = loc_max_2 - loc_max_1;
    }
}
if (r_loc_min == INT32_MAX) {
    cout << 0;
}
else {
    cout << r_loc_min;
}
  return 0;
}
