#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define MX 20
int main(){
    float vet[TAM];
    float *p = vet;
    srand(time(NULL));
    for(int i=0 ;i<TAM;i++){
        *(p+i)=((float)rand()/RAND_MAX)*MX;
    }
    for(int k=0;k<TAM;k++){
        printf("[%p] , %.2f\n" , p+k , *(p+k));
    }
    
    float *pMaior = p;
    for(int i=1;i<TAM;i++){
        pMaior = (*pMaior<*(p+i))?p+i:pMaior;
    }
    float *pMenor = p;
    for(int i=1;i<TAM;i++){
        pMenor = (*pMenor>*(p+i))?p+i:pMenor;
    }
    printf("==========\n");
    printf("Maior:  [%p] %.2f\n" , pMaior , *pMaior);
    printf("Menor:  [%p] %.2f\n" , pMenor , *pMenor);
    
    return 0;
}