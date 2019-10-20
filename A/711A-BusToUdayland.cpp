#include <iostream>
#include <string>
#include <vector>
#define fast_cin()                 \
  ios_base::sync_with_stdio(NULL); \
  cin.tie(0);                      \
  cout.tie(0);
using namespace std;

size_t replace(std::string& str, std::string str_find,
               std::string str_replace) {
  if (auto index = str.find(str_find); index != std::string::npos) {
    str.replace(index, str_replace.length(), str_replace);
    return index + str_replace.length();
  }
  return std::string::npos;
}

int main() {
  fast_cin();
  size_t n;
  string input;

  cin >> n;
  vector<string> inputArray;
  for (auto i = 0; i < n; i++) {
    cin >> input;
    inputArray.push_back(input);
  }
  auto flag = false;
  for (auto& str : inputArray) {
    if (replace(str, "OO", "++") != std::string::npos) {
      flag = true;
      break;
    }
  }
  if (flag) {
    cout << "YES" << endl;
    for (auto str : inputArray) {
      cout << str << endl;
    }
  } else {
    cout << "NO" << endl;
  }

  return 0;
}