#include <stdio.h>
#include <stdlib.h>
void raiz(int num[]){
    for (int x=0;x<3;x++){
        num[x] = num[x] * num[x];
    printf("%d" ,num[x]);
    }
}
int main(){
    int inumber[3]={2,3,4};
    raiz(inumber);
    return 0;
}