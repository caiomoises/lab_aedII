#include <stdio.h>
#include <time.h>
#include <math.h>

int main(){
    int m=0;
    clock_t start = clock();
    for(size_t i = 0; i < 1000000; i++){
        m = m+1;
    }
    clock_t end = clock();
    double soma = (double) (end - start)/CLOCKS_PER_SEC;
    printf("%f\n", soma);
}