#include <stdio.h>

int main (void)
{
    int a = 15;
    int b = 5;
    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    int divisao = a / b;
    printf("\n\n\tHello, world!\n\t");
    
    printf("\n\n\tA soma é :%d\n\t", soma);
    printf("\n\n\tA subtração é :%u\n\t", subtracao);
    printf("\n\n\tA multiplicação é :%u\n\t", multiplicacao);
    printf("\n\n\tA divisão é :%u\n\t", divisao);
    getchar();
    return 0;    
}
