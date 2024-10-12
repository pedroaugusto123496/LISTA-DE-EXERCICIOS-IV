#include <stdio.h>

int main()
{
    int n;
    int i;

    int inicio = 0;
    int fim = n - 1; 
    int valorProcurado;
    int resultado = -1; 

   
    printf("Quantos numeros deseja inserir na lista? ");
    scanf("%d", &n);
        int lista[n];
    printf("Digite uma lista de numeros inteiros crescente:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &lista[i]);
    }

    
    printf("Digite o valor que deseja procurar na lista: ");
    scanf("%d", &valorProcurado);

    inicio = 0;
    fim = n - 1;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (lista[meio] == valorProcurado) {
            resultado = meio; 
            break; 
        }
        else if (lista[meio] < valorProcurado) {
            inicio = meio + 1;
        }
        else {
            fim = meio - 1; 
        }
    }

    
    if (resultado != -1) {
        printf("Valor encontrado no índice: %d\n", resultado);
    } else {
        printf("Valor nao encontrado na lista.\n");
    }

    return 0;
}
