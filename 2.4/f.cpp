#include <iostream>
#include <vector>


int main() {
  size_t m, n, k;
  std::cin >> m >> n >> k;

  std::vector<std::vector<int>> bombs(m, std::vector<int>(n, 0));
  int x, y;
  for (size_t i = 0; i != k; ++i) {
    std::cin >> x >> y;
    bombs[x - 1][y - 1] = 1;
  }

  int countOfBombs = 0;
  for (size_t i = 0; i != m; ++i) {
    for (size_t j = 0; j != n ;j++) {
      if (j != 0) {
        std::cout << ' ';
      }

      if (bombs[i][j] == 1) {
        std::cout << '*';
      } else {
        if (i > 0 && j > 0) {
          countOfBombs += bombs[i - 1][j - 1];
        }

        if (i > 0 && j < n - 1) {
          countOfBombs += bombs[i - 1][j + 1]; 
        }

        if (i < m - 1 && j > 0) {
          countOfBombs += bombs[i + 1][j - 1]; 
        }

        if (i < m - 1 && j < n - 1) {
          countOfBombs += bombs[i + 1][j + 1];
        }

        if (i > 0) {
          countOfBombs += bombs[i - 1][j];
        }

        if (i < m - 1) {
          countOfBombs += bombs[i + 1][j];
        }

        if (j > 0) {
          countOfBombs += bombs[i][j - 1];
        }

        if (j < n - 1) {
          countOfBombs += bombs[i][j + 1];
        }
        
        std::cout << countOfBombs;
        countOfBombs = 0;
      }
    }

    std::cout << '\n';
  }

  return 0;
}
