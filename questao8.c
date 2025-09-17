#include <stdio.h>
int main (){
    int x;
    printf("Digite um número: ");
    scanf("%d",&x);
    printf("O antecessor vale %d e o sucessor vale %d\n", x-1 ,x+1);
    return 0;
}