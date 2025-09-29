#include <stdio.h>
#include <math.h>
int main(){
    int x;
    printf("digite um número: ");
    scanf("%d",&x);
    printf("o triplo de %d é %d\n", x , 3*x);
    printf("o quadrado de %d é %.2f\n", x , pow(x,2));
    printf("a metade de %d é %.2f\n", x , (float) x/2);
    return 0;
}