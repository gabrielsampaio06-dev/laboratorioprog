#include <stdio.h>
int main(){
    float x , y;
    printf("Digite um número: \n");
    scanf("%f",&x);

    printf("Digite outro número: \n");
    scanf("%f",&y);

    printf("A soma de %.2f com %.2f vale %.2f\n",x ,y , x+y);
    printf("o produto de %.2f com %.2f vale %.2f\n",x ,y , x*y);
    printf("A subtração de %.2f com %.2f vale %.2f\n",x ,y ,x-y);
    printf("O quociente de %.2f com %.2f vale %.0f\n",x ,y ,x/y);
    int z = (int)x%(int)y;

    if (z ==0)
    {
        printf("A divisao deu exata");
    }else{
        printf("A divisão deu resto %d\n",z);
    }
    
    
    return 0;
}