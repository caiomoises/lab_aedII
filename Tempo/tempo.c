#include <stdio.h>
#include <time.h>
#include <math.h>

void funcao(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k < n; k++){
                if(j == n-1){
                    printf("Marcador: %d\n", i);
                }
            }
        }
    }
}

int main(){
    double soma = 0;

    for(int i=0; i<10; i++){
        clock_t start = clock();
        funcao(10);
        clock_t end = clock();
        soma += (double) (end - start);
    }
    printf("Tempo de execucao: %f\n", soma/(10*CLOCKS_PER_SEC));
}