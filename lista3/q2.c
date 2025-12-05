#include <stdio.h>
#include <stdlib.h>
#define TAM 100
int main(){
char palavra[TAM],letra;
printf("digite uma palavra: \n");
scanf("%s" ,palavra);

int cont =0 ;
printf("digite uma letra: \n");
scanf(" %c" ,&letra);

for(int i=0;palavra[i] !='\0';i++){
    if(letra == palavra[i]){
        cont += 1;
    }
}
if(cont !=0){
    printf("a letra %c esta presente na palavra %s\n" ,letra ,palavra);
}if(cont ==0){
    printf("a letra %c nao esta presente nao esta presente na palavra %s\n" ,letra ,palavra);
}
    return 0;
}