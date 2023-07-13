#include <cstdio>
#include <cassert>
#include <vector>
#include "function.h"

signed main()
{
    static int N, M;
    assert(scanf("%d %d", &N, &M));
    std::vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        assert(scanf("%d", &A[i]));
    }
    printf("%lld", minPenguinValue(N, M, A));
}