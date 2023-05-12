#include <cstdio>
#include <cassert>
#include <vector>
#include "archery.h"

signed main()
{
    static int N;
    assert(scanf("%d", &N));
    std::vector<int> A(N), U(N - 1), D(N - 1);
    for (int i = 0; i < N; i++)
    {
        assert(scanf("%d", &A[i]));
    }
    for (int i = 0; i < N - 1; i++)
    {
        assert(scanf("%d", &U[i]));
    }
    for (int i = 0; i < N - 1; i++)
    {
        assert(scanf("%d", &D[i]));
    }
    printf("%lld", minPenguinCoin(N, A, U, D));
}