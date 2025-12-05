#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(int argc ,char *argv[]){
 if(argc !=2){
    printf("uso: <coocorrencias> %s\n\t" ,*argv);
    exit(1);
}   
 int **m = NULL;
int tam = atoi(*(argv+1));
int n = tam;
int vet1[tam] ,vet2[tam];
int *p1 ,*p2 = NULL;
p1 = vet1 ;
p2=vet2;
//inicio da criaçao dos vetores
srand(time(NULL));
for(int i =0;i<tam;i++){           // vetor 1
    *(p1+i) = rand()%n;          //
    printf("%d " ,*(p1+i));
}
printf("\n");

for(int i=0;i<tam;i++){           //vetor 2
    *(p2+i) = rand()%n; 
    printf("%d " ,*(p2+i));       //
}
printf("\n");



//** matriz(vai armazenar o meu vetor de ponteiros *linha)
m = (int **)malloc(tam * sizeof(int *));
if(!m){
    printf("memoria indisponivel\n");
    exit(2);
}
//vetor de ponteiros *linha (vai armazenar os valores inteiros da coluna)
for(int i=0;i<tam;i++){
    *(m+i) = (int *)malloc(tam*sizeof(int));
    if(!(*(m+i))){
        printf("memoria indisponivel\n");
        exit(3);
    }
}
//matriz coorelaçao criada,ate agora ela é zero pois nada foi comparado
for(int i =0;i<tam;i++){
    for(int j=0;j<tam;j++){
        
        *(*(m+i)+j) = 0;
        printf("%2d " ,*(*(m+i)+j));
    }
    printf("\n");
}
//comparaçoes 
for(int i =0;i<tam;i++){
    *(*(m+*(p1+i))+*(p2+i)) +=1;//vai pegar a linha da matriz(vetor 1) e comparar com a coluna(vetor 2)

    
}
printf("\n");
for(int i=0;i<tam;i++){
    for(int j=0;j<tam;j++){
        printf("%2d " ,*(*(m+i)+j));
    }
    printf("\n");
}



    return 0;
}