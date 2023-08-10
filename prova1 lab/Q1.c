#include <stdio.h>

int main(){
    int cont = 0; // Contador para controlar o número de caracteres por linha
    for(int i = 0; i <= 127; i++){ // Loop de 0 a 127 para percorrer os valores ASCII
        printf("%3d: %c", i, i); // Imprime o valor numérico e o caractere correspondente

        cont ++;
        if(cont == 10){
            printf("\n");
            cont = 0;
        }
    }
    return 0;
}