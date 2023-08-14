#include <stdio.h>
#include <stdlib.h>

int diasAulas(int dia, int mes, int ano){
    int ultimoDia = 29, ultimoMes = 10, ultimoAno = 2023;
    ano = ano;
    mes *= 30;
    dia = dia + mes + ano;
    
    int semanas, quatdAulas;
    ultimoAno = ultimoAno;
    ultimoMes *= 30;
    ultimoDia = ultimoDia + ultimoAno + ultimoMes;

    semanas = (ultimoDia - dia)/7;
    quatdAulas = semanas*2;

    return quatdAulas;
}

int main(){
    int dia, mes, ano;

    printf("Insira o dia, mes e ano atual: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    int date = diasAulas(dia, mes, ano);
    
    if(date > 0){
        printf("Faltam %d aulas de LAEDII para finalizar a disciplina! ", date);
    }else {
        printf("O semestre ja encerrou!");
    }
}