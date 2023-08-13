#include <stdio.h>

// Função recursiva para calcular f(m, n)
int calculate(int m, int n) {
    // Caso base: se n for igual a 1, retorna m + 1
    if (n == 1) {
        return m + 1;
    }
    // Caso base alternativo: se m for igual a 1, retorna n + 1
    else if (m == 1) {
        return n + 1;
    }
    // Caso geral: utiliza recursão para calcular f(m, n)
    else {
        // Chamada recursiva para f(m, n - 1)
        int result1 = calculate(m, n - 1);
        // Chamada recursiva para f(m - 1, n)
        int result2 = calculate(m - 1, n);
        // Retorna a soma dos resultados das chamadas recursivas
        return result1 + result2;
    }
}

int main() {
    int m, n;
    
    // Solicita e lê os valores de m e n
    printf("Informe o valor de m: ");
    scanf("%d", &m);
    
    printf("Informe o valor de n: ");
    scanf("%d", &n);

    // Calcula f(m, n)
    int result = calculate(m, n);
    
    // Imprime o resultado
    printf("O resultado de f(%d, %d) é %d\n", m, n, result);

    return 0;
}