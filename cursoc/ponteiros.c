#include <stdio.h>
#include <stdlib.h>
    int main(){
        int num = 10 ;
        int *p = &num ;
        printf("O valor de num é %d\n" , num);
        printf("O endereço de num é %p\n" , &num);
        printf("O valor de p é %p\n",&num);
        printf("O valor apontado por p é: %d\n", *p);
        return 0;
    }
