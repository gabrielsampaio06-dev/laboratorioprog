#include <stdio.h>
#include <stdlib.h>
void maiorMenor( int *vet ,int tam , int *Maior , int *Menor  ){
    int i;
    *Menor = *vet;
    *Maior = *vet;
    for(i=1;i<tam;i++){
        if(*Menor>*(vet+i)){
            *Menor =*(vet +i); 
        }if(*Maior<*(vet+i)){
            *Maior = *(vet+i);
        }
    }
}
int main(){
int Maior , Menor ,  vet[10] = {12,34,65,77,89,90,43,55,21,37};
printf("MENOR:%d\t , MAIOR:%d\n",Menor ,Maior);
maiorMenor(vet ,10 ,&Maior , &Menor);
printf("MENOR:%d\t , MAIOR:%d\n",Menor ,Maior);
    return 0;
}