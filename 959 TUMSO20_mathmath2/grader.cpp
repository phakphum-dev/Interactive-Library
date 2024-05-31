#include <cassert>
#include <cstdio>
#include <numeric>
#include <vector>
#include <string>
#include "mathmath2.h"

static bool call_init = false;
static int queries_count = 0;

static std::vector<int> A;

int init()
{
  if(call_init){
    printf("-1\n");
    printf("Multiple call of init.\n");
    exit(0);
  }
  int N;
  if (scanf("%d", &N) != 1) {
    printf("-1\n");
    printf("Could not read input.\n");
    exit(0);
  }
  A.resize(N);
  for (int i = 0; i < N; i++) {
    if (scanf("%d", &A[i]) != 1) {
      printf("-1\n");
      printf("Could not read input.\n");
      exit(0);
    }
  }
  return N;
}

long long GCD(int i, int j)
{
  ++queries_count;
  return std::gcd(A[i], A[j]);
}

long long LCM(int i, int j, int k)
{
  ++queries_count;
  return std::lcm(std::lcm((long long)A[i], (long long)A[j]), (long long)A[k]);
}

void answer(std::vector<int> ans)
{
  if (ans.size() != A.size()) {
    printf("-1\n");
    printf("Invalid answer size.\n");
  }
  if (ans == A) {
    printf("1");
    printf("%d\n", queries_count);
  } else {
    printf("0");
  }
  exit(0);
}