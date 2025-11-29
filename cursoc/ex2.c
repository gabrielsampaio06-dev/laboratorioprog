#include <stdio.h>
#include <stdlib.h>
void trocar(float *a ,float*b){
    float c;
    c = *a;
    *a = *b;
    *b = c ;
}
int main(){
    float num1 =40 ,num2 = 123;
    printf("num 1 = %f\t , num2 = %f\n", num1 , num2);
    trocar(&num1 ,&num2);
    printf("num 1 = %f\t , num2 = %f\n", num1 , num2);
}