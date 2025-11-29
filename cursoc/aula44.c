#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc ,char *argv[]){
    if(argc <2){
        printf("USO %s\t <lista de numeros>" ,*argv);
        exit(1);
    }
    int tam = atoi(*(argv+1));
    int *p = NULL;
    p = malloc(tam * sizeof(int));
    if(!p){
        printf("memoria indisponível\n");
        exit(2);
    }
    srand(time(NULL));
    for(int i =0;i<tam;i++){
        *(p+i) = rand()%20;
        printf("[%p] %d\n" ,&p[i] ,p[i]);
    }
    //embaralhar elementos
    for(int i =1;i<(tam-1)/2;i++){
        int c = *(p+i);
        *(p+i) = *(p+(tam-1-i));
        *(p+(tam-1-i)) = c;
    }
    //imprimir vetor
    printf("\n");
    for(int i=0;i<tam;i++){
        printf("[%p] %d\n" ,p+i ,*(p+i));
    }

    return 0 ;
}