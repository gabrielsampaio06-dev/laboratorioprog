#include <stdio.h>
#include <stdlib.h>
void imprimir(int);
int main(){
void (*pfunc)(int);
int n;
printf("digite um numero: ");
scanf("%d" ,&n);
pfunc = imprimir;
pfunc(n);
    return 0;
}
void imprimir(int x){
    printf("o numero digitado é %d\n" ,x);
}
