#include <stdio.h>
int main(){
    int altura = 10;
    int largura = 5 ;
    for(int i =0 ;  i < altura ; i++){
        for(int j =0 ; j< largura ; j++){
            if(i==0||i==altura-1||j==0||j==largura-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }


 int h = 10;
    int l = 10 ;
    for(int a =0 ;  a < h ; a++){
        for(int b =0 ; b< l ; b++){
            if(a==0||a==h-1||b==0||b==l-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    } 

    int r = 8;
    for(int c = -r ; c<=r ; ++c){
        for(int d = -r ; d<=r ; ++d){
            if(c*c + d*d <= r*r){
                printf("*");
            }else{
                printf(" ");
            }
        }
            printf("\n");
        
     }
    
    }

    


    
  

return 0;

 }
    