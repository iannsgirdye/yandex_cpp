#include <iostream>
#include <utility>
#include <vector>


std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int>>& matrix) {
  std::pair<size_t, size_t> maxElementIndexes;
  int maxElement = matrix[0][0];
  maxElementIndexes.first = 0, maxElementIndexes.second = 0;
  
  for (size_t i = 0; i != matrix.size(); ++i) {
    for (size_t j = 0; j != matrix[0].size(); ++j) {
      if (matrix[i][j] > maxElement) {
        maxElement = matrix[i][j];
        maxElementIndexes.first = i, maxElementIndexes.second = j;
      }
    }
  }

  return maxElementIndexes;
}


int main() {
  int n, k;
  std::cin >> n >> k;

  std::vector<std::vector<int>> matrix;
  matrix.resize(n);

  int element;
  for (size_t i = 0; i != n; ++i) {
    for (size_t j = 0; j != k; ++j) {
      std::cin >> element;
      matrix[i].push_back(element);
    }
  }

  std::pair<size_t, size_t> result = MatrixArgMax(matrix);
  std::cout << result.first << ' ' << result.second << '\n';

  return 0;
}
