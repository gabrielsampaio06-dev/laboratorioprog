#include <stdio.h>
int main(){
    int num , abs ;
    printf("Digite um número: ");
    scanf("%d",&num);
    abs = (num>=0)*num + (num<0)*(-num);
    printf("O valor absoluto vale: %d",abs);
    return 0;
}