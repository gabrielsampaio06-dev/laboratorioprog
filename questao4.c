#include <stdio.h>
int main (){
    int x;
    printf("Digite o valor a ser pago: \n");
    scanf("%d",&x);
    printf("O novo valor com  a taxa do garçom é %.2f",(float)x + x/10.0);
    return 0;
}