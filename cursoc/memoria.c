#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p ;
    char *p2;
    float *p3;
    printf("tamanho de um inteiro %d\n",sizeof(int));
    printf("o tamanho de float é %d\n",sizeof(float));
    printf("O tamanho de um char é %d\n", sizeof(char));
    printf("tamanho de um ponteiro %d\n" , sizeof(p));
    printf(" tamamho do p2 é %d\n" , sizeof(p2));
    printf("o tamamho do p3 é %d\n" , sizeof(p3));

    return 0 ;
}