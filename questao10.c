#include <stdio.h>
int main(){
    double x;
    printf("CONVERSOR REAIS DOLLAR:\n");
    printf("Digite o valor em reais a ser convertido:  R$");
    scanf("%lf",&x);
    printf("Cotação atual do Dollar: R$5,45\n");
    printf("Quantidade de dólares : $%.3lf\n",x/5.45);
    return 0;
}