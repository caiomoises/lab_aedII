#include <stdio.h>

int maior(int x, int y){
    if(x>y){
        return x;
    }
    return y;
}

int main(){
    int x = maior(10, 5);
    printf("%d", x);
}