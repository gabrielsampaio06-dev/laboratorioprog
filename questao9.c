#include <stdio.h>
int main(){
    float x,y,z;
    int medida;
    printf("Comprimento: ");
    scanf("%f",&x);
    printf("Largura: ");
    scanf("%f",&y);
    printf("Altura: ");
    scanf("%f",&z);
    printf("Digite a medida: \n");
    printf("1 --> mm\n");
    printf("2 --> cm\n");
    printf("3 --> dm\n");
    printf("4 -->  m\n");
    scanf("%d",&medida);
    switch (medida)
    {
    case 1:
        printf("O volume vale %.2f milimetros cúbicos\n",x * y * z);
        break;
    case 2:
        printf("O volume vale %.2f ml\n",x * y * z);
        break;
    case 3:
        printf("O volume vale %.2f litros\n",x * y * z);
        break;
    case 4:
        printf("O volume vale %.2f metros cúbicos\n", x * y * z);

    default:
        printf("Digite uma medida válida\n");
        break;
    }

    
    return 0;
}