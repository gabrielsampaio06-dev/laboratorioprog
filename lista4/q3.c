
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int main(){
    int vet[TAM];
    int *p = vet;
    srand(time(NULL));
    for(int i =0;i<TAM;i++){
        *(p+i)= rand()%100;
        printf("valores gerados [%p] %d\n" ,p+i , *(p+i));
    }
     int *maior = p;
     for(int i =1;i<TAM;i++){
        maior =(*maior<*(p+i))?p+i:maior;
     }
     int *menor = p;
     for(int i=1;i<TAM;i++){
        menor = (*menor>*(p+i))?p+i:menor;
     }
    printf("Maior valor : [%p] %d\n",maior ,*maior);
    printf("Menor valor :[%p] %d\n" ,menor , *menor);
    float x;
    for(int i =0;i<TAM;i++){
        x = (float)(*(p+i)-*menor)/(*maior -*menor);
        printf("x'[%d] = %.2f\n" ,i , x);
    }

    return 0;
}