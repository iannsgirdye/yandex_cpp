#include <string>
#include <vector>
#include <iostream>


std::string CommonPrefix(const std::vector<std::string>& words) {
  std::string commonPrefix = "";

  if (words.size() == 0) {
    return commonPrefix;
  }

  size_t maxLen = words[0].size();
  for (size_t i = 0; i != words.size(); ++i) {
    if (words[i].size() > maxLen) {
      maxLen = words[i].size();
    }
  }

  for (size_t i = 0; i != maxLen; ++i) {
    char letter = words[0][i];
    
    for (size_t j = 0; j != words.size(); ++j) {
      if (words[j][i] != letter) {
        return commonPrefix;
      }
    }

    commonPrefix.push_back(words[0][i]);
  }

  return commonPrefix;
}


int main() {
  const std::vector<std::string> data = {
    "aprple",
    "aprpicot",
    "aprplication"
  };

  std::cout << CommonPrefix(data) << std::endl;

  return 0;
}
