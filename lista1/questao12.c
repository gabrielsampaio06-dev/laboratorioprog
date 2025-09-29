#include <stdio.h>
int main(){
    int x , y  ,z ;
    printf("Digite um número: \n");
    scanf("%d",&x);
    printf("Digite outro número: \n");
    scanf("%d",&y);
    printf("Os valores de x e y são: %d e %d\n",x , y);
    z=x;
    x=y;
    y=z;
    printf("Os valores  trocados de x e y são: %d e %d\n",x , y);
    return 0;
}