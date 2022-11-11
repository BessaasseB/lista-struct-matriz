#include <stdio.h>

int main(void){

    int v[10], v1[10], v2[10], i,j=0, k=0;

    for (i = 0; i < 10; i++){
        
        printf("Informe um numero: ");
        scanf("%d", &v[i]);
    }
    

    for(i=0; i<10; i++){
        if(v[i] % 2 == 0){
            v2[j] = v[i];
            j++;
        }
        else{
            v1[k] = v[i];
            k++;
        }
    }

    printf("Numeros pares:");
    for(i=0; i<10; i++){

        if(v2[i] != ' '){
            printf("%d\t", v2[i]);
        }
        else{
            break;
        }

    }
    printf("\n");

    printf("Numeros impares: ");
    for(i=0; i<10; i++){
        if(v1[i] != ' '){
            printf("%d\t", v1[i]);
        }
        else{
            break;
        }
    }

    return 0;
}