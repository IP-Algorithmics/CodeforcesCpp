#include <iostream>
#include <vector>
#define fast_cin()                 \
  ios_base::sync_with_stdio(NULL); \
  cin.tie(0);                      \
  cout.tie(0);
using namespace std;

int main() {
  fast_cin();
  size_t n, sum = 0;
  vector<short> input;

  cin >> n;
  for (auto i = 0; i < n; i++) {
    short x;
    cin >> x;
    input.push_back(x);
  }
  for (auto& x : input) {
    sum += x > 0 ? x : -x;
  }
  cout << sum;
  return 0;
}