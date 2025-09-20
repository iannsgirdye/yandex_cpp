#include <iostream>
#include <string>
#include <cctype>
#include <vector>


bool ascii(std::string str) {
  for (size_t i = 0; i != str.size(); ++i) {
    if (str[i] < 33 || str[i] > 126) {
      return false;
    }
  }

  return true;
}


bool len(std::string str) {
  if (str.size() < 8 || str.size() > 14) {
    return false;
  }

  return true;
}


bool symbols(std::string str) {
  std::vector<int> countsOfSymbols(4, 0);
  for (size_t i = 0; i != str.size(); ++i) {
    if (isupper(str[i])) {
      countsOfSymbols[0]++;
      continue;
    }

    if (islower(str[i])) {
      countsOfSymbols[1]++;
      continue;
    }

    if (isdigit(str[i])) {
      countsOfSymbols[2]++;
      continue;
    }

    countsOfSymbols[3]++;
  }

  int countOfSymbolTypes = 0;
  for (size_t i = 0; i != countsOfSymbols.size(); ++i) {
    if (countsOfSymbols[i] > 0) {
      countOfSymbolTypes++;
    }
  }

  if (countOfSymbolTypes < 3) {
    return false;
  }

  return true;
}


int main() {
  std::string str;
  std::cin >> str;
  
  if (ascii(str) && len(str) && symbols(str)) {
    std::cout << "YES\n";
  } else {
    std::cout << "NO\n";
  }

  return 0;
}
