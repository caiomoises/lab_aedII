#include <stdio.h>

int fib(int n){
    int aux;
    if(n == 0 || n == 1){
        return 1;
    }
    aux = fib(n-1);
    return aux + fib(n-2);}

int main(){
    int x = 15;
    int res = fib(x);
}