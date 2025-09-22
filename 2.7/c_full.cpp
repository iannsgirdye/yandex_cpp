#include <vector>
#include <string>
#include <iostream>


std::vector<std::string> Split(const std::string& str, char delimiter) {
  std::vector<std::string> words;

  std::string word;
  for (size_t i = 0; i != str.size(); ++i) {
    if (str[i] != delimiter) {
      word.push_back(str[i]);
    } else {
      words.push_back(word);
      word = "";
    }
  }

  if (word.size() > 0) {
    words.push_back(word);
  }

  if (str[str.size() - 1] == delimiter) {
    words.push_back("");
  }

  return words;
}


int main() {
  const std::string str = "-13-24--08-11-2014-";
  const char delimiter = '-';

  std::vector<std::string> words = Split(str, delimiter);

  for (size_t i = 0; i != words.size(); ++i) {
    std::cout << words[i] << std::endl;
  }

  return 0;
}
