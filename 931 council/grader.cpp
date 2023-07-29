#include "council.h"
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <vector>

static int N, M, Q;
static int counter = 0;
std::vector<int> A, count;

int sameVote(int X, int Y){
    if(X < 1 || Y < 1 || X > N || Y > N) {
        printf("Bad inxed\n");
        exit(-1);
    }
    if(++counter > Q) {
        printf("Query limit exceed\n");
        exit(-1);
    }
    return A[X] == A[Y];
}

signed main() {
    assert(scanf("%d %d %d",&N, &M, &Q) == 3);
    A.resize(N + 1);
    count.resize(M + 1);
    for(int i = 1; i <= N; i++) {
        assert(scanf("%d", &A[i]) == 1);
        if(A[i] < 1 || A[i] > M) {
            printf("Out of bound\n");
            exit(-1);
        }
        count[A[i]]++;
    }
    static int answer = -1;
    for(int i = 1; i <= M; i++) {
        if(count[i] > N / 2){
            answer = i;
        }
    }
    if(answer == -1) {
        printf("No winner\n");
        exit(-1);
    }
    static int output = giveAnswer(N, M, Q);
    if(A[output] == answer) {
        printf("Correct %d\n", counter);
    }else{
        printf("Incorrect\n");
    }
}