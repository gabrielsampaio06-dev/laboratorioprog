#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void criaçaomat(int **matriz, int tam);
void dprincipal(int **matriz,int tamanho ,int *somatorio);
void dsecundaria(int **matriz , int tamanho , int *somatorio);
int main(int argc ,char *argv[]){
    if(argc !=2){
        printf("uso: <matrizdenumeros>\t %s" ,*argv);
        exit(1);
    }
    int lc = atoi(*(argv+1));
    int **m = NULL;
    m = (int **) malloc(lc *sizeof(int *));
    //funçao de criar matriz
    criaçaomat(m ,lc);
    //funçao soma diagonal principal
    int soma  = 0 ;
    dprincipal(m , lc , &soma);
    //funçao soma diagonal secundária 
    dsecundaria(m ,lc ,&soma);

    return 0;
}
void criaçaomat(int **matriz , int tam){
    srand(time(NULL));
    //preechendo o espaço
    for(int i=0;i<tam;i++){
        if(!(*(matriz+i) = (int *)malloc(tam*sizeof(int)))){
            printf("memoria indisponível\n");
            exit(2);
        }
        for(int j=0;j<tam;j++){
            *(*(matriz+i)+j) = rand()%15;
            printf("[%p] %2d" , (*(matriz+i)+j) , *(*(matriz+i)+j) );
        }
        printf("\n");
    }
}
void dprincipal(int **matriz , int tam , int *somatorio){
    *somatorio = 0;
    for(int i =0;i<tam;i++){
        *somatorio+= *(*(matriz+i)+i);
       
    }
    printf("soma diagonal principal: %d\n" , *somatorio);
}
void dsecundaria(int **matriz ,int tam ,int *somatorio){
    *somatorio =0;
    for(int i = 0;i<tam;i++){
        *somatorio += *(*(matriz+i)+(tam-i-1));
    }
    printf("soma diagonl secundaria : %d\n" ,*somatorio);

}

