# 760 Daisu(Dice)

## C or C++ (Orange.h)

```cpp
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<time.h>
#include<bitset>
#include<vector>
using namespace std;

void InInt(int* a, int LIM = INT_MAX, int LIMM = 0) {
    char INP[5000];scanf("%s", INP);
    unsigned long long LEK = 0;
    for (int i = 0;INP[i];i++) {
        if (INP[i] >= '0' && INP[i] <= '9' && LEK <= LIM) {
            LEK = LEK * 10l + INP[i] - '0';
        } else {
            printf("INVALID_INPUT");
            exit(1);
        }
    }
    if (LEK <= LIMM) {
        printf("INVALID_INPUT");
        exit(1);
    }
    *a = (int)LEK;
}

bitset<2> Orange_MAP[1000][1000];
char Orange_INP[1000];
int Orange_si, Orange_sj, Orange_ei, Orange_ej;
vector<int> Orange_TOI;
int Orange_R, Orange_C, Orange_F;
int Orange_CHAPTER = 0;
bitset<2> Orange_ISLA;
bool isINP = false;

void INP() {

    if (isINP) {
        return;
    }
    isINP = true;

    srand(time(NULL));
    InInt(&Orange_R);
    InInt(&Orange_C);

    for (int i = 0;i < Orange_R;i++) {
        scanf("%s", Orange_INP);
        for (int j = 0;j < Orange_C;j++) {
            if (Orange_INP[j] == 'S') {
                if (Orange_ISLA[0]) {
                    printf("INVALID_INPUT");
                    exit(1);
                } else {
                    Orange_ISLA[0] = true;
                    Orange_si = i;
                    Orange_sj = j;
                    Orange_MAP[i][j][0] = true;
                    Orange_MAP[i][j][1] = true;
                }
            } else if (Orange_INP[j] == 'E') {
                if (Orange_ISLA[1]) {
                    printf("INVALID_INPUT");
                    exit(1);
                } else {
                    Orange_ISLA[1] = true;
                    Orange_ei = i;
                    Orange_ej = j;
                    Orange_MAP[i][j][0] = true;
                    Orange_MAP[i][j][1] = true;
                }
            } else if (Orange_INP[j] == '#') {
                Orange_MAP[i][j][0] = true;
                Orange_MAP[i][j][1] = false;
            } else if (Orange_INP[j] == 'X') {
                Orange_MAP[i][j][0] = false;
                Orange_MAP[i][j][1] = true;
            } else if (Orange_INP[j] == '.') {
                Orange_MAP[i][j][0] = false;
                Orange_MAP[i][j][1] = false;
            } else {
                printf("INVALID_INPUT");
                exit(1);
            }
        }
    }

    if (!(Orange_ISLA[0] && Orange_ISLA[1])) {
        printf("INVALID_INPUT");
        exit(1);
    }

    InInt(&Orange_F);
    for (int i = 0;i < Orange_F;i++) {
        int XXXXXXX = 6;
        InInt(&XXXXXXX, 7);
        Orange_TOI.push_back(XXXXXXX);
    }
}


int Get_Row() {
    INP();
    return Orange_R;
}

int Get_Column() {
    INP();
    return Orange_C;
}

char Get_Map(int i, int j) {
    if (i == Orange_si && j == Orange_sj)return 'S';
    if (i == Orange_ei && j == Orange_ej)return 'E';
    if (Orange_MAP[i][j][0] == false && Orange_MAP[i][j][1] == false)return '.';
    if (Orange_MAP[i][j][0] == true && Orange_MAP[i][j][1] == false)return '#';
    if (Orange_MAP[i][j][0] == false && Orange_MAP[i][j][1] == true)return 'X';
}

int Throw_Dice() {
    if (Orange_CHAPTER < Orange_F) {
        Orange_CHAPTER++;
        return Orange_TOI[Orange_CHAPTER - 1];
    } else {
        Orange_CHAPTER++;
        return rand() % 6 + 1;
    }
}

void Goal() {
    if (Orange_CHAPTER == Orange_F) {
        printf("WINNER");
        exit(0);
    } else if (Orange_CHAPTER < Orange_F) {
        printf("WTF?? : %d chapter", Orange_CHAPTER);
        exit(1);
    } else {
        printf("LOSER");
        exit(0);
    }
}
//EOF
```
