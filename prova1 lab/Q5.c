#include <stdio.h>
#include <stdlib.h>

// Função para calcular o produto de dois números de forma recursiva
int produtoRecursivo(int x1, int x2) {
    if (x2 == 0) {
        return 0; // Caso base: produto de qualquer número com 0 é 0
    }

    if (x2 == 1) {
        return x1; // Caso base: produto de qualquer número com 1 é o próprio número
    }

    // Caso geral: x1 + x1 + x1 + ... (x2 vezes)
    return x1 + produtoRecursivo(x1, x2 - 1);
}

int main() {
    int produto, x1 = 5, x2 = 5;
    
    // Chama a função para calcular o produto recursivo
    produto = produtoRecursivo(x1, x2);
    
    // Imprime o resultado do produto
    printf("\nProduto: %i\n", produto);

    return 0;
}