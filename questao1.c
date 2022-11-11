#include <stdio.h>
#include <string.h>

int main(void){

    float nota[100];
    int matric[100], i, matricSearch, count=0;
    char opt;

    for(i=0; i<100; i++){

        printf("Informe a matricula do aluno: ");
        scanf("%d", &matric[i]);
        printf("Informe a nota do aluno: ");
        scanf("%f", &nota[i]);
        fflush(stdin);
        printf("Deseja inserir outro aluno (S ou N)? ");
        scanf("%c", &opt);

        if(opt == 'n'){
            break;
        }
    }

    do{

        printf("Informe a matricula do aluno que deseja verificar: ");
        scanf("%d", &matricSearch);
        fflush(stdin);

        for ( i = 0; i<100 ; i++){
            
            if(matric[i] == matricSearch){
                printf("Matricula: %d\n", matric[i]);
                printf("Nota: %.2f\n", nota[i]);
                break;
            }

        }

        count++;

        printf("Deseja verificar outro aluno (S ou N)? ");
        scanf("%c", &opt);

    }while(count!=10 && opt != 'n');
    
    printf("O maximo de 10 pesquisas foi alcancado, reinicie o programa.");


    return 0;
}