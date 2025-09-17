#include <iostream>

int main() {
  short int startX, startY, finishX, finishY;
  std::cin >> startX >> startY >> finishX >> finishY;

  if (startX == finishX || startY == finishY) {
    std::cout << "YES\n";
  } else if (std::abs(startX - finishX) == std::abs(startY - finishY)) {
    std::cout << "YES\n";
  } else {
    std::cout << "NO\n";
  }

  return 0;
}
