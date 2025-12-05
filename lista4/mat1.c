#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int linhas ,colunas ;
    printf("LINHAS:\n" );
    scanf("%d" ,&linhas);
    printf("COLUNAS: \n");
    scanf("%d" ,&colunas);
    int **mat = NULL;
    mat = (int **)malloc(linhas*sizeof(int *));
    for(int i = 0;i<linhas;i++){
        mat[i] = (int *)malloc(linhas * colunas *sizeof(int *));
    }
    srand(time(NULL));
    for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            mat[i][j] = rand()%20;
            printf("%3d" , mat[i][j]);
                }
                printf("\n");
            }
    int l1,c1,l2,c2;
    printf("primeiro elemento: /n");
    printf("linha:\n");
    scanf("%d" ,&l1);
    printf("coluna \n");
    scanf("%d" ,&c1);
    printf("segundo elemento: /n");
    printf("linha:\n");
    scanf("%d" ,&l2);
    printf("coluna \n");
    scanf("%d" ,&c2);

        
    
    

    return 0;
} 