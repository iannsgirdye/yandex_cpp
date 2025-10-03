#include <vector>
#include <string>
#include <iostream>


template <typename container>
void Print(const container &data, const std::string &separate) {
  bool first = true;

  for (const auto &element : data) {
    if (first) {
      first = false;
    } else {
      std::cout << separate;
    }

    std::cout << element;
  }

  std::cout << std::endl;
}
