/**
 * author: Aryan Suri
 * licence: MIT
 **/
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
const int T = 1000;
int64_t part1(vector<int64_t> F, vector<int64_t> S, int c) {
  sort(F.begin(), F.end());
  sort(S.begin(), S.end());
  for (int i = 0; i < T; ++i) {
    c += (abs(F[i] - S[i]));
  }
  return c;
};

int64_t part2(const vector<int64_t> &F, unordered_map<int64_t, int64_t> &f) {
  int64_t s = 0;
  for (auto n : F) {
    s += (n * f[n]);
  }
  return s;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int c = 0;
  int t = T;
  vector<int64_t> F;
  vector<int64_t> S;
  unordered_map<int64_t, int64_t> freq;

  while (t--) {
    int64_t a, b;
    cin >> a >> b;
    freq[b]++;
    F.push_back(a);
    S.push_back(b);
  }
  cout << part1(F, S, c) << endl;
  cout << part2(F, freq) << endl;
  return 0;
}
