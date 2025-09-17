#include <stdio.h>
int main (){
    char resp;
    float altura;
    do
    {
        printf("Informe seu sexo Masculino(M)  Feminino(F)");
        scanf(" %c",&resp);
        if (resp=='M'||resp=='m')
        {
            printf("Informe sua altura em metros: ");
            scanf("%f",&altura);
            printf("Seu peso ideal é: %.2f kg\n",(72.7*altura)-58.0);
            break;       
        }else if (resp=='F'||resp=='f')
        {
            printf("Informe sua altura em metros: ");
            scanf("%f",&altura);
            printf("Seu peso ideal é %.2f kg\n",(62.1*altura)-44.7);
            break;
        }else{
            printf("Digite um sexo válido! M para masculino e F para feminino\n");
        }
        
        
    } while (1);
    
    
    
    
    return 0 ;
}