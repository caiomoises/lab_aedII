#include <stdio.h>
#include <stdlib.h>

// Função para verificar se um número é perfeito
int isPerfect(int n) {
    int soma = 0, i;

    // Loop para somar os divisores próprios do número
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }

    // Verificação se a soma dos divisores próprios é igual ao número original
    if (soma == n) {
        return soma; // Retorna a soma dos divisores próprios
    } 
}

int main() {
    int n, r;

    printf("\nInsira um numero: ");
    scanf("%d", &n);

    // Chama a função para verificar se o número é perfeito e armazena o resultado
    r = isPerfect(n);

    if (r == n) {
        printf("\n%d e um numero perfeito\n", n);
    } else {
        printf("\n%d nao e um numero perfeito\n", n);
    }

    return 0;
}