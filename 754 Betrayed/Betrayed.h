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




