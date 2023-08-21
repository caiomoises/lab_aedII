#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Declaração da função para encontrar trincas de lados pitagóricos
void ladosPitagoricos(int limit) {
    // Loop para variar o valor de um dos lados (i)
    for (int i = 1; i <= limit; i++) {
        // Loop aninhado para variar o valor do outro lado (j)
        for (int j = 1; j <= limit; j++) {
            // Cálculo dos quadrados dos lados i e j
            int a = i * i;
            int b = j * j;
            
            // Cálculo da hipotenusa c usando a fórmula de Pitágoras
            int c = sqrt(a + b);
            
            // Verificação se os lados formam um triângulo retângulo
            if (a + b == c * c) {
                // Impressão dos valores dos lados formando a trinca pitagórica
                printf("%d %d %d\n", i, j, c);
            }
        }
    }
}

int main() {
    // Definição do limite máximo para busca de trincas
    int limit = 25;
    
    // Chamada da função para encontrar e imprimir trincas de lados pitagóricos
    ladosPitagoricos(limit);
    
    // Indicação de saída bem-sucedida
    return 0;
}