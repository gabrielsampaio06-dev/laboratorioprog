#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void media(int *vet ,int tam , int *resultado ,float *meio){
    *resultado = 0;
    *meio =0;
    for(int i =0 ;i<tam; i++){
        *resultado += vet[i];   
    }
     *meio = *resultado/tam;
}
void mediana(int *vet ,int tam ,float *centro){
    *centro = 0;
    if(tam%2 !=0){
        *centro = vet[(tam/2)];
    }
    if(tam%2==0){
        *centro = (vet[tam/2 -1] + vet[tam/2])/2.0;
    }
}
void moda(int *vet , int tam ,int *modelo){
    *modelo = vet[0] ;
    int maxfreq = 0 ;
    for(int j =0 ;j<tam;j++){
        int freq = 0 ;
        for(int k =0 ;k<tam;k++){
            if(vet[j]==vet[k]){
                freq++;
            }
        }
        if(freq>maxfreq){
            maxfreq = freq;
            *modelo = vet[j];
            }
        
        
        }
    }
    int main(){
        int elmts;
        printf("Quantidsde de elementos: \n");
        scanf("%d" ,&elmts);
        int vetor[elmts];
        int *p = vetor;
        srand(time(NULL));
        for(int i =0;i<elmts;i++){
            *(p+i) = rand()%100 ;
            printf("[%p] %d\n" ,p+i , *(p+i));
        }
        int soma = 0;
        float meio = 0;
        float central = 0;
        int modelo = 0;
        media(vetor ,elmts ,&soma ,&meio);
        printf("a media  é %.2f\n" , meio);
        mediana(vetor ,elmts ,&central);
        printf("o mediana é %.2f\n" ,central);
        moda(vetor ,elmts ,&modelo);
        printf("a moda é %d\n" ,modelo);
        return 0;
    }
