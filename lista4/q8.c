#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int i;
    int j;
    printf("defina as dimensoes: ");
    scanf("%d %d " ,&i ,&j);
    int mat[i][j];
    srand(time(NULL));
    for(int k=0;k<i;k++){
        for(int l =0;l<j;l++){
            mat[k][l] = rand()%5;
            printf("%2d" ,mat[k][l]);
            
        }
        printf("\n");
    }
    int soma = 0;
    for(int k=0;k<i;k++){
        soma += mat[k][k];
        printf("soma é %d\n " ,soma);
        if(soma%2==0){
            printf("soma da diagonal é par\n");
        }
        else{
            printf("soma da diagonal nao é par");
        }
    }

    
        
    
    return 0;
}