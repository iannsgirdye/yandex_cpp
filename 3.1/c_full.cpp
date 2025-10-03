#include <iostream>
#include <deque>
#include <string>


void MakeTrain() {
  std::deque<int> train;

  std::string command;
  size_t number;
  while (std::cin >> command >> number) {
    if (command.front() == '+') {
      if (command.find("left") == 1) {
        train.push_front(number);
      } else {
        train.push_back(number);
      }
    } else {
      number = (number <= train.size()) ? number : train.size();
      if (command.find("left") == 1) {
        train.erase(train.begin(), train.begin() + number);
      } else {
        train.erase(train.end() - number, train.end());
      }
    }
  }

  for (size_t i = 0; i != train.size(); ++i) {
    if (i != 0) {
      std::cout << ' ';
    }
    std::cout << train[i];
  }

  std::cout << std::endl;
}


int main() {
  MakeTrain();

  return 0;
}
