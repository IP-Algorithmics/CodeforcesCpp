#include <algorithm>
#include <iostream>
#include <string>

#define fast_cin()                 \
  ios_base::sync_with_stdio(NULL); \
  cin.tie(0);                      \
  cout.tie(0);
using namespace std;

int main() {
  fast_cin();
  size_t n;
  string input;

  cin >> n >> input;

  if (auto counter = count(input.begin(), input.end(), '1');
      counter != n - counter) {
    cout << 1 << endl << input;
  } else {
    cout << 2 << endl << input.substr(0, 1) << " " << input.substr(1);
  }
  return 0;
}