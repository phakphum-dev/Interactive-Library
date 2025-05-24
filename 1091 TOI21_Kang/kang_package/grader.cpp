#include "kang.h"
#include <iostream>
#include <vector>

int main() {
  std::cin.tie(0) -> std::ios::sync_with_stdio(0);
  int N, M;
  std::cin >> N >> M;
  std::vector<int> A(N), B(M);
  for (int i = 0; i < N; i++)
    std::cin >> A[i];
  for (int j = 0; j < M; j++)
    std::cin >> B[j];

  std::vector<long long> C = capsize(A,B);
  for (int i = 0; i < M; i++)
    std::cout << (i == 0 ? "" : " ") << C[i];
  std::cout << "\n";

  return 0;
}
