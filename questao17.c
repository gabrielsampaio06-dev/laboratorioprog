#include <stdio.h>
int main(){
     int r;
    printf("Insira o valor do raio: ");
    scanf("%d",&r);
    printf("o valor do comprimento da circunferencia é %.2f",2 * 3.14159 * r);
    printf("O valor da a'rea da circunferencia é : %.2f", 3.14159 * r * r);
    return 0;
}