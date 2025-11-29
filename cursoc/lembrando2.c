#include <stdio.h>
#include <stdlib.h>

void somar(int ,int);
void multiplicar (int ,int);
void dividir (int ,int);
void subtrair (int ,int);
int main(int argc ,char *argv[]){
void (*vetpfunc[])(int,int)= {somar ,multiplicar ,dividir ,subtrair};
int n,z,op;

if(argc !=4){
    printf("uso <operaçoes>\n\t");
    exit(1);
}

 n = atoi(*(argv+1));
 z = atoi(*(argv+2));
 op = atoi(*(argv+3));
(*vetpfunc[op])(n ,z);



    return 0;
}
void somar(int a ,int b){
    printf("a soma é %d\n" ,a+b);
}
void multiplicar(int a ,int b){
    printf("a multiplicaçao é %d\n" ,a*b);
}
void dividir(int a ,int b){
    printf("a divisão é %.2f\n" ,(float) a/b);
}
void subtrair(int a ,int b){
    printf("a subtraçao é %d\n" ,a-b);
}