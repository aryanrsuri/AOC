/**
 * author: Aryan Suri
 * licence: MIT
 **/
#include <iostream>
using namespace std;

int p1() { return 0; }

int p2() { return 0; }
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int T = 1000;
  while (T--) {
    int a, b;
    cin >> a >> b;
    cout << a + b << '\n';
  }

  return 0;
}
