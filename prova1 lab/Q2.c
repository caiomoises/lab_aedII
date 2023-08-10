#include<stdio.h>

typedef struct data{
    int dia;
    int mes;
    int ano;
} Data;

Data ultimaData = {23,10,2023};

int diasDeAula(Data primeiraData){
    int totalDeAulas = -2;

    if((primeiraData.mes == 6) && (primeiraData.dia <= 25)){
            printf("\nO semestre 2023.1 não começou!\n");
        return 0;
    }

    if(primeiraData.mes > ultimaData.mes){
        printf("\nO semestre acabou!\n");
        return 0;
    }
    for(int i = 7; 1; i = i+7){
        if((primeiraData.mes == 10) && (primeiraData.dia >= 24)){
            return totalDeAulas;
        }

        primeiraData.dia = primeiraData.dia + 7;
        totalDeAulas = totalDeAulas + 2;

        if((primeiraData.mes == 6) && (primeiraData.dia >= 31)){
            primeiraData.dia = 3;
            primeiraData.mes = 7;
        }

        if((primeiraData.mes == 7) && (primeiraData.dia >= 32)){
            primeiraData.dia = 7;
            primeiraData.mes = 8;
        }

        if((primeiraData.mes == 8) && (primeiraData.dia >= 32)){
            primeiraData.dia = 4;
            primeiraData.mes = 9;
        }

        if((primeiraData.mes == 9) && (primeiraData.dia >= 31)){
            primeiraData.dia = 2;
            primeiraData.mes = 10;
        }
    }
    return totalDeAulas;
}

int main(){
    Data dataDeHoje;
    int totalDeAulas = 0;
    printf("Infome a data da ultima aula de AEDII (00/00/0000):\n");
    scanf("%d %d %d", &dataDeHoje.dia, &dataDeHoje.mes, &dataDeHoje.ano);

    totalDeAulas = diasDeAula(dataDeHoje);
    
    printf("Restam %d aulas de LAEDII.", totalDeAulas);
}