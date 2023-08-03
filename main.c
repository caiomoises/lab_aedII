#include <stdio.h>

int fib(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    int x = fib(n-1);
    int y = fib(n-2);
    return x + y;
}

int main(){
    int x = 10;
    int res = fib(x);
}