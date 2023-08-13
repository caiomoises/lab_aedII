#include <stdio.h>
#include <stdlib.h>

int function(int m, int n){
    if(n == 1){
        return m + 1;
    } else if(m == 1){
        return n + 1;
    } else{
        return function(m, n-1) + function(m-1, n);
    }
}

int main(){
    int m, n;

    printf("Valor de M: ");
    scanf("%d", &m);

    printf("Valor de N: ");
    scanf("%d", &n);
    int func;
    func = function(m, n);
    // printf(func);
}