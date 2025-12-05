#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void erromedio(int *veta ,int *vetb , int tam ,int *errotot){
    
     *errotot = 0;
    for(int i=0 ;i<tam ;i++){
        int dif = veta[i] - vetb[i];
       int  erro = dif * dif ;
        *errotot += erro;

    }
}
int main(){
int tamanho;
int erroinicial = 0;
printf("Tamanho do vetor: ");
scanf("%d" ,&tamanho);
int vetor1[tamanho];
int vetor2[tamanho];
int *p1 = vetor1;
int *p2 = vetor2;
srand(time(NULL));
for(int i =0 ;i<tamanho;i++){
    *(p1+i) = rand()%100;
    *(p2+i) = rand()%100;
    printf("VETOR 1 [%p] %d\n" ,p1+i ,*(p1+i));
    printf("VETOR 2 [%p] %d\n" ,p2+i ,*(p2+i));
}
erromedio(vetor1 ,vetor2 ,tamanho ,&erroinicial);
printf("o erro medio é %d\n" ,erroinicial);


    return 0;
}