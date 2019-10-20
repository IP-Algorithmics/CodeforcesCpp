#include <iostream>
#define fast_cin()                 \
  ios_base::sync_with_stdio(NULL); \
  cin.tie(0);                      \
  cout.tie(0);
using namespace std;

int main() {
  fast_cin();
  size_t n;

  cin >> n;
  int repetitions = n / 2;
  for (int i = 0; i < n * repetitions; i++) {
    if (i % repetitions == 0 && i != 0) {
      cout << endl;
    }
    cout << i + 1 << " " << n * n - i << " ";
    }
  return 0;
}