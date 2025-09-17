#include <iostream>

int main() {
  int n;
  std::cin >> n;

  double sign = 1.0, result = 0;

  for (double i = 1.0; i <= n; i++) {
    result += (sign / i);
    sign *= -1;
  }

  std::cout << result << "\n";

  return 0;
}
