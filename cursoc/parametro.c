#include <stdio.h>
#include <stdlib.h>

void imprimir(int  *num){
    *num +=5;
    printf(" valor de num agora é %d\n",*num);
    
    
}
int main(){
    int x=0;
    printf("digite um numero:");
    scanf("%d" , &x);
    
    imprimir(&x);
    printf("O valor no main é %d\n",x);

    return 0 ;
}
    
