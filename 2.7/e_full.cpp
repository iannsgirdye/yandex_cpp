#include <vector>
#include <iostream>


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


int main() {
  std::vector<std::vector<int>> matrix = {
    {11, 12, 13},
    {21, 22, 23},
    {31, 32, 33},
    {41, 42, 43},
    {51, 52, 53}
  };

  std::vector<std::vector<int>> transporedMatrix = Transpose(matrix);
  for (size_t i = 0; i != transporedMatrix.size(); ++i) {
    for (size_t j = 0; j != transporedMatrix[0].size(); ++j) {
      std::cout << transporedMatrix[i][j] << " ";
    }

    std::cout << std::endl;
  }

  return 0;
}
