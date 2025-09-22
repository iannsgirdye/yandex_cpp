#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cmath>


int main() {
  size_t n;
  std::cin >> n;

  std::vector<std::pair<int, int>> points;
  std::pair<int, int> point;
  for (size_t i = 0; i != n; ++i) {
    std::cin >> point.first >> point.second;
    points.push_back(point);
  }

  std::sort(
    points.begin(), points.end(),
    [](const std::pair<int, int>& lhs, const std::pair<int, int>& rhs) {
      return pow(lhs.first, 2) + pow(lhs.second, 2) < pow(rhs.first, 2) + pow(rhs.second, 2);
    }
  );

  for (size_t i = 0; i != n; ++i) {
    std::cout << points[i].first << ' ' << points[i].second << std::endl;
  }

  return 0;
}
