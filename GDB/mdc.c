#include <stdio.h>

int mdc(int x, int y){
    if(x==y){
        return x;
    }else if(x>y){
        return mdc(x-y, y);
    }
    return mdc(x, y-x);
}

int main(){
    int x = 65;
    int y = 11;
    int z = mdc(x, y);
    printf("%d", z);
}
