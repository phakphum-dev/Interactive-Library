#include<stdio.h>
#include<stdlib.h>

long long ___k = -1;

long long F(long long x) {
    if (___k == -1) {
        printf("Give me your k : ");
        scanf("%lld", &___k);
        if (___k < 1 || ___k > 79432823472428150) {
            //? 10^16.9 is close to 79432823472428150
            printf("k is Overflow... exit");
            exit(1);
        }
    }

    if (x < 1 || x > 79432823472428150) {
        //? 10^16.9 is close to 79432823472428150
        printf("Call F Overflow... exit");
        exit(1);
    }


    const long long deepDown = 69;
    long long delta;
    if (x > ___k) {
        delta = x - ___k;
    }
    else {
        delta = ___k - x;
    }
    return deepDown + delta;

}

void answer(long long x) {

    if (x < 1 || x > 79432823472428150) {
        //? 10^16.9 is close to 79432823472428150
        printf("Call answer Overflow... exit");
        exit(1);
    }

    if (x == ___k) {
        printf("Correct.");
    }
    else {
        printf("Wrong...\nExpected %lld but got %lld :(", ___k, x);
    }
    exit(0);
}