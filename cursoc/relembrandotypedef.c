#include <stdio.h>
#include <stdlib.h>
void somar(int ,int ,int *);
void subtrair(int ,int ,int *);
void multiplicar(int ,int ,int *);
void dividir(int ,int ,int *);
void calcular(void(*pF)(int ,int ,int *) ,int a ,int b ,int *c);
int main(int argc ,char *argv[]){
    if(argc!=4){
        printf("uso %s <numero 1> <numero 2> <codOP>\n\t" ,argv[1]);
        exit(1);
    }
    typedef void (*Func) (int ,int ,int *);
    int n = atoi(*(argv+1));
    int z = atoi(*(argv+2));
    int op = atoi(*(argv+3));
    int r;
    if(op<0||op>=3){
        printf("digite uma operaçao válida\n");
    }

    Func v[] = {somar ,subtrair ,multiplicar ,dividir};
    calcular(v[op] ,n ,z ,&r);
    printf("o resultado da operaçao escolhida é %d\n" ,r);
    return 0;
}
void somar(int a ,int b ,int *c){
    *c = a+b;
}
void subtrair(int a ,int b ,int *c){
    *c = a-b;
}
void multiplicar(int a ,int b ,int *c){
    *c = a*b;
}
void dividir(int a ,int b ,int *c){
    *c = a/b;
}
void calcular(void(*pF)(int ,int ,int*) ,int a ,int b ,int *c){
    (*pF)(a , b, c );
}
