#include <stdio.h>
int main(){
    int x,y,z;
    unsigned long long int total;
    printf("Digite a quantidade de horas: ");
    scanf("%d",&x);
    printf("Digite a quantidade de minutos desejados: ");
    scanf("%d",&y);
    printf("Digite a quantidade de segundos: ");
    scanf("%d",&z);
    total = (3600 * x) + (60 * y) + z;
    printf("A quantidade total de segunos foi: %llu",total);    
return 0;
}