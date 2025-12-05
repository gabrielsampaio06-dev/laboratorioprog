#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
   int i ,j ;
    printf("defina o tamanho : ");
     scanf("%d  %d" ,&i ,&j );
    int mat [i][j];
    
    srand(time(NULL));
        for(int k =0;k<i;k++){
            for(int l = 0;l<j;l++){
                mat[k][l] = rand()%20;
                printf(" %2d" ,mat[k][l] );
            }
            printf("\n");
        }
        int t = 18;
        printf("PARAMETRO : 18 \n");
        for(int k = 0 ;k<i ;k++){
            for(int l =0;l<j ;l++){
                if(mat[k][l]>t){
                    mat[k][l] = 1;

                }
                else{
                    mat[k][l] = 0;
                }
            }
          printf("===============\n");  
          
        }
        for(int k = 0 ;k<i;k++){
            for(int l = 0 ;l<j;l++){
                printf(" %2d" , mat[k][l]);
            }
            printf("\n");
        }
        
     return 0;
    }
    