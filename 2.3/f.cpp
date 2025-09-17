#include <iostream>

int main() {
  unsigned int n;
  std::cin >> n;
  
  int result = 0;

  while (n > 0) {
    result += n % 10;
    n /= 10;
  }
  
  std::cout << result << "\n";

  return 0;
}
