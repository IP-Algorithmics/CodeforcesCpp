#include <iostream>
#include <string>
using namespace std;

int main() {
  string input;
  int sfcounter = 0, fscounter = 0, n;
  cin >> n >> input;

  for (int i = 0; i < n - 1; i++) {
    if (input[i] == 'S' && input[i + 1] == 'F') {
      sfcounter++;
    }
    if (input[i] == 'F' && input[i + 1] == 'S') {
      fscounter++;
    }
  }

  cout << ((sfcounter > fscounter) ? "YES" : "NO");
  return 0;
}