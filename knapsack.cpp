#include <iostream>
#include <vector>

int knapsack(int capacity, std::vector<int> weights, std::vector<int> values) {
  int n = weights.size();
  std::vector<std::vector<int>> dp(n + 1, std::vector<int>(capacity + 1, 0));

  for (int i = 1; i <= n; i++) {
    for (int w = 1; w <= capacity; w++) {
      if (weights[i - 1] <= w) {
        dp[i][w] = std::max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
      } else {
        dp[i][w] = dp[i - 1][w];
      }
    }
  }

  return dp[n][capacity];
}

int main() {
  int capacity = 10;
  std::vector<int> weights = {2, 3, 5, 7};
  std::vector<int> values = {10, 20, 30, 40};

  int max_value = knapsack(capacity, weights, values);
  std::cout << "Maximum value: " << max_value << std::endl;

  return 0;
}
