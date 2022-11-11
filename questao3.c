#include <stdio.h>

int main(void){

    int i=0, num[10], j, numCheck=0;

    for(i=0; i<10; i++){
        
        do{
            numCheck = 0;
            printf("Informe um numero: ");
            scanf("%d", &num[i]);

            for(j=0; j <= i; j++){
                if(num[j] == num[i]){
                    numCheck = 1;
                }
            }
            
        }while(numCheck != 0);
    }
    


    return 0;
}