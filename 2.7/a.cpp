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
