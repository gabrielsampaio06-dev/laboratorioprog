#include <stdio.h>
#include <stdlib.h>
void somar (int ,int ,int *);
void multiplicar (int ,int ,int *);
void dividir (int ,int ,int *);
void subtrair (int ,int ,int *);
void calcular (void(*pF)(int ,int ,int*) ,int a ,int b ,int *c);
typedef void (*Func)(int ,int ,int *);
int main (int argc ,char *argv[]){
if(argc !=4){
    printf("uso %s<valor1> ,<valor2> ,<codOper>\n\t" ,argv[0]);
    exit(4);
}
int n = atoi(*(argv+1));
int z = atoi(*(argv+2));
int op = atoi(*(argv+3));
int r;
if(op<0||op>=3){
    printf("codigo de operaçao invalido");
}
Func v[] ={somar ,multiplicar ,dividir ,subtrair};
calcular(v[op] ,n ,z ,&r);
printf("resultado é %d" ,r);

    return 0;
}
void somar(int q ,int w ,int *e){
    *e = q+w;
}
void multiplicar(int q ,int w ,int *e){
    *e = q*w;
}
void dividir (int q ,int w ,int *e){
    *e = q/w;
}
void subtrair(int q ,int w ,int *e){
    *e = q-w;
}
void calcular (void(*pF)(int ,int ,int *) ,int a ,int b ,int *c){
    (*pF)(a ,b ,c);
}