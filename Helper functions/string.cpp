#include <string>
void replaceAll(std::string& str, std::string str_find,
                std::string str_replace) {
  size_t index = 0;
  while (true) {
    /* Locate the substring to replace. */
    index = str.find(str_find, index);
    if (index == std::string::npos) break;

    /* Make the replacement. */
    str.replace(index, str_find.length(), str_replace);

    /* Advance index forward so the next iteration doesn't pick it up as well.
     */
    index += str_replace.length();
  }
}

size_t replace(std::string& str, std::string str_find,
               std::string str_replace) {
  if (auto index = str.find(str_find); index != std::string::npos) {
    /* Make the replacement. */
    str.replace(index, str_find.length(), str_replace);
    return index + str_replace.length();
  }
  return std::string::npos;
}

size_t replace(std::string& str, std::string str_find, std::string str_replace,
               size_t starting_index) {
  if (auto index = str.find(str_find, starting_index);
      index != std::string::npos) {
    /* Make the replacement. */
    str.replace(index, str_find.length(), str_replace);
    return index + str_replace.length();
  }
  return std::string::npos;
}

size_t countChar(std::string str, char c) {
  return std::count(str.begin(), str.end(), c);
}

size_t countSubstring(const std::string& str, const std::string& sub) {
  if (sub.length() == 0) return 0;
  int count = 0;
  for (size_t offset = str.find(sub); offset != std::string::npos;
       offset = str.find(sub, offset + sub.length())) {
    ++count;
  }
  return count;
}

void toLowerCase(std::string& str) {
  for (auto& character : str) {
    character = tolower(character);
  }
}