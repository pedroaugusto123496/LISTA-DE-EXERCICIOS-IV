#include <stdio.h>

int main()
{
    int x;
    int limite = 200;
    
    printf("digite sua idade:\n");
    scanf("%d", &x);
    switch(x){
    case 0 ... 17:
    printf("voc� e menor de idade");
    break;
    case 18 ... 65:
    printf("voc� e maior de idade");
    break;
    default:
    printf("voc� e idoso");
    }
    return 0;
}
