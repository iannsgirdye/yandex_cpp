#include <iostream>
#include <vector>


int main() {
  size_t n;
  std::cin >> n;

  std::vector<int> a(n);
  for (size_t i = 0; i != n; ++i) {
    std::cin >> a[i];
  }

  std::vector<int> b(n);
  int place;
  for (size_t guest = 0; guest != n; ++guest) {
    place = a[guest] - 1;
    b[place] = guest + 1;
  }

  for (size_t i = 0; i != n; ++i) {
    std::cout << b[i];
    if (i != n - 1) {
      std::cout << " ";
    } else {
      std::cout << "\n";
    }
  }

  return 0;
}
