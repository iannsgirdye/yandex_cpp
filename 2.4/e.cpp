#include <iostream>
#include <string>
#include <cctype>


int main() {
  std::string data;
  std::getline(std::cin, data);
  
  std::string result;
  for (size_t i = 0; i != data.size(); ++i) {
    if (!isspace(data[i])) {
      result.push_back(data[i]);
    }
  }

  if (result.size() == 0) {
    std::cout << "YES\n";
    return 0;
  }

  for (size_t i = 0; i != result.size() / 2; ++i) {
    if (result[i] != result[result.size() - 1 - i]) {
      std::cout << "NO\n";
      return 0;
    }
  }
  
  std::cout << "YES\n";
  return 0;
}
