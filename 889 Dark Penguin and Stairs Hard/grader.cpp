#include <cstdio>
#include <cassert>
#include <vector>
#include "stairs.h"

signed main()
{
    static long long N;
    static int M;
    assert(scanf("%lld %d", &N, &M));
    std::vector<int> S(M);
    for (int i = 0; i < M; i++)
    {
        assert(scanf("%d", &S[i]));
    }
    printf("%d", countWays(N, M, S));
}