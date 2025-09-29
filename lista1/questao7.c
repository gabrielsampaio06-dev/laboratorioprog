#include <stdio.h>
#include <math.h>
int main(){
   long double x;
   printf("digite um número: ");
   scanf("%Lf",&x);
   printf("o quadrado do número escolhido é %.2Lf",powl(x,2.0L));
    return 0;
}