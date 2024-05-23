#include <cassert>
#include <cstdio>
#include <vector>
#include <utility>
#include <algorithm>

#include "route.h"

int main() {
  int N;
  assert(scanf("%d", &N) == 1);

  int M;
  assert(scanf("%d", &M) == 1);

  std::vector<int> W(M);
  for (int i = 0; i < M; i++) {
    assert(scanf("%d", &W[i]) == 1);
  }

  std::sort(W.begin(), W.end());

  std::vector<std::pair<int, int>> V = route(N, W);

  for (int j = 0; j < M; j++) {
    printf("%d %d\n", V[j].first, V[j].second);
  }
}
