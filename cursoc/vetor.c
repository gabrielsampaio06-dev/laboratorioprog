#include <stdio.h>
#include <stdlib.h>
void teste(int vet[] , int tam){
    for(int i=0;i<tam;i++){
        vet[i] = 2 * vet[i];
    }
    printf("\n");
}
void imprimir(int vet[] , int tam){
    for(int i=0;i<tam;i++){
        printf("%d " , vet[i]);
    }    
}
int main(){
    int vetor[10] = {4,8,13,35,87,9,89,5,68,18};
    imprimir(vetor,10);
    teste(vetor,10);
    imprimir(vetor,10);
    //a maquina nao ira fazer uma copia,portanto o meu vetor criado serve como um apontador 

    return 0;
}