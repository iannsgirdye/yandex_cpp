#include <iostream>
#include <string>
#include <vector>


int main() {
  std::string inputed;
  std::cin >> inputed;

  std::string result;
  result.push_back(inputed[0]);

  for (size_t i = 1; i != inputed.size(); ++i) {
    switch (inputed[i]) {
      case 'b':
      case 'f':
      case 'p':
      case 'v':
        if (result.back() != '1') {
          result.push_back('1');
        }
        break;
      case 'c':
      case 'g':
      case 'j':
      case 'k':
      case 'q':
      case 's':
      case 'x':
      case 'z':
        if (result.back() != '2') {
          result.push_back('2');
        }
        break;
      case 'd':
      case 't':
        if (result.back() != '3') {
          result.push_back('3');
        }
        break;
      case 'l':
        if (result.back() != '4') {
          result.push_back('4');
        }
        break;
      case 'm':
      case 'n':
        if (result.back() != '5') {
          result.push_back('5');
        }
        break;
      case 'r':
        if (result.back() != '6') {
          result.push_back('6');
        }
        break;
    }
  }
  
  if (result.size() < 4) {
    for (size_t i = result.size(); i != 4; i++) {
      result.push_back('0');
    }
  } else {
    result.resize(4);
  }
  
  std::cout << result << "\n";

  return 0;
}
