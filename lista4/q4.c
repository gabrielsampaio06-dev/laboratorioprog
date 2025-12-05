#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define MX 20
void somavet(float *valores ,int tam ,float *resultado){
    *resultado = 0;
    for(int i=0 ;i<tam;i++){
        *resultado += valores[i];
    }
}
int main(){
float vet[TAM];
float *p =vet;
float somatorio = 0;
srand(time(NULL));
for(int j=0;j<TAM;j++){
    *(p+j) = (((float) rand())/RAND_MAX)*MX;
    printf("[%p] %.2f\n" ,p+j , *(p+j));
    
}
somavet(vet ,TAM ,&somatorio);
printf("o resultado da soma é : %.2f\n" ,somatorio);
   
    return 0;
}