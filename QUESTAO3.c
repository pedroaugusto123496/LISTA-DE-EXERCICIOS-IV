#include <stdio.h>

int main() {
    int n; 
    printf("Digite o n�mero de pre�os: ");
    scanf("%d", &n);
    
    float lista[n];
    printf("Digite os pre�os:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &lista[i]);
    }

    
 for (int i = 1; i < n; i++) {
        float key = lista[i];
        int j = i - 1;

       
        while (j >= 0 && lista[j] > key) {
           lista[j + 1] = lista[j];
            j--;
        }
      
       lista[j + 1] = key;
       
    }
   
   printf("A ordem dos pre�os �: \n");
   for (int i = 0; i < n; i++) {
        printf("%.2f ", lista[i]); 
   }
       printf("\n"); 
}
