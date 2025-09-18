#include <stdio.h>
int main(){
     unsigned x;
    printf("Digite a temperatura em Celsius: ");
    scanf("%u",&x);
    float y = (9*(float)x)+160.0;
    printf("%u Celsius valem %.2f Fahrenheint", x , y);
    return 0;
}