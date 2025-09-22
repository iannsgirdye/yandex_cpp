#include <vector>


std::vector<std::vector<int>> Transpose(const std::vector<std::vector<int>>& matrix) {
  std::vector<std::vector<int>> transposedMatrix;

  std::vector<int> row;
  for (size_t i = 0; i != matrix[0].size(); ++i) {
    for (size_t j = 0; j != matrix.size(); ++j) {
      row.push_back(matrix[j][i]);
    }
    transposedMatrix.push_back(row);
    row.clear();
  }

  return transposedMatrix;
}
