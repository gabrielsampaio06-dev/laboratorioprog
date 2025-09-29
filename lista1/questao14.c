#include <stdio.h>
int main(){
    int dias;
    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%d",&dias);
    if (dias<10)
    {
        printf("Não há bonificação para essa quantidade de dias,valor a ser recebido: %.2f" ,0.9*(50.25*dias));
    }else if (dias>10||dias<20)
    {
        printf("A bonificacação é de 20 porcento,valor a ser recebido: %.2f" , 0.9*(50.25*dias*1.20));
    }else{
        printf("Para mais de 20 dias trabalhados a bonificação é de 30 porcento,valor a ser recebido: %.2f" , 0.9*(50.25*dias*1.30));
    }
    
    
    return 0;
}