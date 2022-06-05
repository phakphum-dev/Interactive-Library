# 754 ผู้ทรยศ

## C++ (Betrayed.h)

```cpp
#include<stdio.h>
#include<stdlib.h>
#include<vector>

int Betrayed_n,Betrayed_k;
int Betrayed_RIP;

bool Betrayed_LIVE[50];
bool Betrayed_WTF;
bool Betrayed_isInput = false;

void INP(){
    Betrayed_isInput = true;
    for(int i=1;i<50;i++)Betrayed_LIVE[i]=true;

    char term;
    printf("Tell me your n : ");
    if(scanf("%d%c", &Betrayed_n, &term) != 2 || term != '\n'){
        printf("INVALID_INPUT");
        exit(1);
    }
    if(Betrayed_n <= 0 || Betrayed_n > 1000000){
        printf("INVALID_INPUT");
        exit(1);
    }
    printf("Tell me your k : ");
    if(scanf("%d%c", &Betrayed_k, &term) != 2 || term != '\n'){
        printf("INVALID_INPUT?");
        exit(1);
    }
    if(Betrayed_k <= 0 || Betrayed_k > 40){
        printf("INVALID_INPUTO");
        exit(1);
    }
    printf("Tell me your pos of poison : ");
    if(scanf("%d%c", &Betrayed_RIP, &term) != 2 || term != '\n'){
        printf("INVALID_INPUT");
        exit(1);
    }
    if(Betrayed_RIP <= 0 || Betrayed_RIP > Betrayed_n){
        printf("INVALID_INPUT");
        exit(1);
    }




}

int Get_n(){
    if (!Betrayed_isInput)INP();
    return Betrayed_n;
}

int Get_k(){
    if (!Betrayed_isInput)INP();
    return Betrayed_k;
}

void Taste(int p,int g){
    if (!Betrayed_isInput)INP();
    if(Betrayed_WTF || p > Betrayed_k || g > Betrayed_n){
        printf("WTF M8");
        exit(1);
    }
    if(g==Betrayed_RIP)Betrayed_LIVE[p] = false;
}

bool * Next_Day(){
    Betrayed_WTF = true;
    return Betrayed_LIVE;
}

void Submit(int answer){
    if (!Betrayed_isInput)INP();
    if(answer > Betrayed_n){
        printf("WTF M8");
        exit(1);
    }
    else if (answer == Betrayed_RIP){
        printf("FOUNDED P");
        exit(0);
    }
    else{
        printf("DIED");
        exit(0);
    }
}
```

## python (Betrayed.py)

```py


Betrayed_n,Betrayed_k = 0,0
Betrayed_RIP=0

Betrayed_LIVE = [True for y in range(1,50)]
Betrayed_WTF=False

Betrayed_n = input("Tell me your n : ")

try:
    Betrayed_n = int(Betrayed_n)
except:
    print("INVALID_INPUT")
    exit(1)

if(Betrayed_n <= 0 or Betrayed_n > 1000000):
    print("INVALID_INPUT")
    exit(1)

Betrayed_k = input("Tell me your k : ")

try:
    Betrayed_k = int(Betrayed_k)
except:
    print("INVALID_INPUT")
    exit(1)

if(Betrayed_k <= 0 or Betrayed_k > 40):
    print("INVALID_INPUT")
    exit(1)


Betrayed_RIP = input("Tell me your pos of poison : ")

try:
    Betrayed_RIP = int(Betrayed_RIP)
except:
    print("INVALID_INPUT")
    exit(1)

if(Betrayed_RIP <= 0 or Betrayed_RIP > Betrayed_n):
    print("INVALID_INPUT")
    exit(1)




def Get_n():

    global Betrayed_n,Betrayed_k,Betrayed_RIP,Betrayed_LIVE,Betrayed_WTF

    return Betrayed_n


def Get_k():

    global Betrayed_n,Betrayed_k,Betrayed_RIP,Betrayed_LIVE,Betrayed_WTF

    return Betrayed_k


def Taste(p:int,g:int):

    global Betrayed_n,Betrayed_k,Betrayed_RIP,Betrayed_LIVE,Betrayed_WTF


    if(Betrayed_WTF or p > Betrayed_k or g > Betrayed_n):
        print("WTF M8")
        exit(1)

    if(g==Betrayed_RIP):
        Betrayed_LIVE[p] = False


def Next_Day():

    global Betrayed_n,Betrayed_k,Betrayed_RIP,Betrayed_LIVE,Betrayed_WTF

    Betrayed_WTF = True
    return Betrayed_LIVE


def Submit(answer:int):

    global Betrayed_n,Betrayed_k,Betrayed_RIP,Betrayed_LIVE,Betrayed_WTF


    if(answer > Betrayed_n):
        print("WTF M8")
        exit(1)
    elif (answer == Betrayed_RIP):
        print("FOUNDED P")
        exit(0)
    else:
        print("DIED")
        exit(0)
```
