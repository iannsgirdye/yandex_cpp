#include <iostream>

int main() {
  int n, k;
  std::cin >> n >> k;

  int printed = n - 1;

  for (int i = 0; i < printed; i++) {
    std::cout << "   ";
  }

  for (int day = 1; day <= k; day++) {
    if (day < 10) {
      std::cout << " ";
    }

    std::cout << day;
    printed++;

    if (printed % 7 != 0) {
      std::cout << " ";
    } else {
      std::cout << "\n";
    }
  }

  std::cout << "\n";

  return 0;
}
