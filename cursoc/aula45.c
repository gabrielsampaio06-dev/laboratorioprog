#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void criaçaomat(int **matriz, int tam);
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
    
    
    //diagonal principal
    int sum = 0;
    for(int i = 0;i<lc;i++){
        sum += *(*(m+i)+i);
    }
    printf("\n");
    
    printf("soma diagonal principal: %d\n" ,sum );
    //diagonal secundaria
    int sumi =0;
    for(int i=0;i<lc;i++){
        sumi += *(*(m+i)+(lc-i-1));

    }
    printf("\n");
    printf("soma da diagonal secundaria : %d\n" ,sumi);
    return 0;
}
void criaçaomat(int **matriz ,int tam ){
    srand(time(NULL));
    
    for(int i =0;i<tam;i++){
        (*(matriz+i) = (int *)malloc(tam*sizeof(int)));
        if (!(*(matriz+i))){
            printf("memoria indisponivel\n");
            exit(3);
        }
        
    }
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