#include <stdio.h>

// Função para inverter uma sequência numérica
int inverterNumero(int numero) {
    int inverso = 0;

    while (numero > 0) {
        int digito = numero % 10; // Obtém o último dígito do número
        inverso = inverso * 10 + digito; // Adiciona o dígito ao número inverso
        numero /= 10; // Remove o último dígito do número original
    }

    return inverso;
}

int invertidoRecursao(int numero, int inverte){
    if(numero == 0){
        return inverte;
    }
    return invertidoRecursao(numero/10, inverte * 10 + numero % 10);
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    int numeroInvertido = inverterNumero(numero);
    int invertido = invertidoRecursao(numero, 0);
    printf("Numero invertido: %d\n", numeroInvertido);
    printf("Numero invertido recursao: %d\n", invertido);

    return 0;
}
