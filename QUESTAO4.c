#include <stdio.h>

int main()
{
   
   int n;
    
    printf("Digite o número de alunos:\n");
    scanf("%d", &n);
   
    char nomes[n][50]; 
    int notas[n];
   
   for (int i = 0; i < n; i++) {
        printf("Digite o nome do aluno %d:\n", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite a nota do aluno %d:\n", i + 1);
        scanf("%d", &notas[i]);
    }


    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (notas[j] < notas[minIndex]) {
                minIndex = j;
            }
        }
        int temp = notas[minIndex];
        notas[minIndex] = notas[i];
        notas[i] = temp;
    }
     printf("\nRelatório de Notas em Ordem Decrescente:\n");
    for (int i = 0; i < n; i++) {
        printf("Aluno: %s - Nota: %d\n", nomes[i], notas[i]);
    }


    return 0;
}
