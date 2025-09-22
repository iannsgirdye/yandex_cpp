#include <vector>
#include <string>


std::string Join(const std::vector<std::string>& tokens, char delimiter) {
  std::string str = "";

  if (tokens.empty()) {
    return str;
  }

  if (tokens.size() == 1) {
    return tokens.front();
  }

  for (size_t i = 0; i != tokens.size(); ++i) {
    for (size_t j = 0; j != tokens[i].size(); ++j) {
      str.push_back(tokens[i][j]);
    }

    if (i + 1 != tokens.size()) {
      str.push_back(delimiter);
    }
  }

  return str;
}
