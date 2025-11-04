#include <stdio.h>
#include <stdlib.h>
int main(){
    int vet[10];
    int *p = NULL;
    printf("digite um numero para o vetor: \n");
    for(int i=0;i<10;i++){
    scanf("%d" ,&vet[i]);
    }
    for(int i=0;i<10;i++){
        if(vet[i]%2==0){
            p = &vet[i];
            break;
        }

    }
    if(p != NULL){
        printf("numero encontrado é [%p] %d/n" ,p , *p);
    }
    
    
    return 0;
}