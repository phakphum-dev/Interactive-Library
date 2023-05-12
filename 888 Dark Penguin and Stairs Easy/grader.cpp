#include <cstdio>
#include <cassert>
#include <vector>
#include "stairs.h"

signed main()
{
    static int N, M;
    assert(scanf("%d %d", &N, &M));
    std::vector<int> S(M);
    for (int i = 0; i < M; i++)
    {
        assert(scanf("%d", &S[i]));
    }
    printf("%d", countWays(N, M, S));
}