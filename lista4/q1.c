#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int vet[10];
    int *p = vet;
    srand (time(NULL));
    int temPar = 0;
    for(int i =0;i<10;i++){
       *(p+i)=rand()%100; 
       printf("%d\n" ,vet[i]);
    }
    for(int i=0;i<10;i++){
        
        if(*(p+i)%2==0){
            printf("o elemento par é [%p]%d\n",p+i,*(p+i));
            temPar = 1;
        }
        if(!temPar){
            printf("nenhum elemento presente\n");
        }
    }
    
    
    return 0;
}



    
    
    
    
    
        
      
    
   
       
        
          
           
        
        
            
        
    
    
    
    return 0;
}
