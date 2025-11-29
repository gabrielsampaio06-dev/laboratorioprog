#include <stdio.h>
#include <stdlib.h>
int main(){
    int x = 5 ,y =10;
    int *ptr = NULL;
    printf("valores de x e y sao: %d e %d\n" , x , y);
    ptr = &y;
    x = *ptr;
    *ptr = 5;
    printf("os novos valores sao  x = %d e y= %d\n" , x , y);

    return 0;
}