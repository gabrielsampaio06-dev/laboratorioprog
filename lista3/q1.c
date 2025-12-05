#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
int main(){
    int vet[TAM];
    
    int *p = vet;
    //preencher vetor
    srand(time(NULL));
    for(int i = 0;i<TAM;i++){
        *(p+i) = rand()%20;
        printf(" %d\n" ,*(p+i));
    }
    //maior e menor 
    int *maior = p;
    int *menor  = p;
    for(int i=1;i<TAM;i++){
        if (*(p+i)>*maior){
            maior = p+i;
        }
        if(*(p+i)<*menor){
            menor = p+i;
        }

       
    }
    
    
    printf("maior: %d\nmenor: %d\n" , *maior , *menor);
    

    return 0;
}