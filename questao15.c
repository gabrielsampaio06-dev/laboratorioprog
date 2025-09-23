#include <stdio.h>
int main(){
    int dias  ;
    float  horas , bruto  , desc;
    printf("Informe o valor da hora aula: ");
    scanf("%f",&horas);
    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%d",&dias);
    printf("Informe o desconto do INSS :");
    scanf("%f",&desc);
    desc = 1 - (desc/100.0);
    bruto = horas*dias;  

    printf("O valor bruto do salário,com %d horas trabalhados é:  %.2f\n" ,dias , bruto);
    printf("O valor líquido do salário é: %.2f", desc * bruto);
    return 0;
}