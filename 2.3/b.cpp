#include <iostream>

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;

  int maxValue, middleValue, minValue;
  if (a >= b && a >= c) {
    maxValue = a;
    if (b >= c) {
      middleValue = b, minValue = c;
    } else {
      middleValue = c, minValue = b;
    } 
  } else if (b >= a && b >= c) {
    maxValue = b;
    if (a >= c) {
      middleValue = a, minValue = c;
    } else {
      middleValue = c, minValue = a;
    } 
  } else {
    maxValue = c;
    if (a >= b) {
      middleValue = a, minValue = b;
    } else {
      middleValue = b, minValue = a;
    }
  }

  if (minValue + middleValue <= maxValue) {
    std::cout << "UNDEFINED\n";
  } else if (minValue * minValue + middleValue * middleValue == maxValue * maxValue) {
    std::cout << "YES\n";
  } else {
    std::cout << "NO\n";
  }

  return 0;
}
