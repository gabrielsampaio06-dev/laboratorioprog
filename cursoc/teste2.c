#include <stdio.h>
#include <stdlib.h>
int main(){
    int vet[5]={1,2,3,4,5};
    int *p = vet;
    printf("o endereço de p é %p\n",&vet);
    printf("o endereço do vetor é: %p\n " ,&vet);
    printf("p esta apontando para %d\n",*p);
    return 0;
}