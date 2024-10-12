#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Por favor, insira um numero inteiro positivo.\n");
    } else {
        printf("Numeros pares entre 1 e %d:\n", numero);

        for (int i = 2; i <= numero; i += 2) {
            printf("%d\n", i);
        }
    }

    return 0;
}
