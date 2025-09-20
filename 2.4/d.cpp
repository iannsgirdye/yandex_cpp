#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


int main() {
  std::vector<std::string> words;
  std::string word;
  while (std::getline(std::cin, word)) {
    words.push_back(word);
  }

  std::sort(words.rbegin(), words.rend());

  for (size_t i = 0; i != words.size(); ++i) {
    std::cout << words[i] << "\n";
  }

  return 0;
}
