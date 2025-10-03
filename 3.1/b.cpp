#include <iostream>
#include <vector>
#include <string>
#include <deque>


int main() {
  size_t N;  // count of students
  std::cin >> N;

  std::deque<std::string> queue;

  std::pair<std::string, std::string> student;
  for (size_t i = 0; i != N; ++i) {
    std::cin >> student.first >> student.second;

    if (student.second == "top") {
      queue.push_front(student.first);
    } else {
      queue.push_back(student.first);
    }
  }

  size_t M;  // count of numbers to find
  std::cin >> M;

  std::vector<int> numbers;
  numbers.reserve(M);

  int number;
  for (size_t i = 0; i != M; ++i) {
    std::cin >> number;
    numbers.push_back(number);
  }

  for (size_t i = 0; i != M; ++i) {
    std::cout << queue[numbers[i] - 1] << std::endl;
  }

  return 0;
}
