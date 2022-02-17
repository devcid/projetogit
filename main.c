#include <stdio.h>
#include <stdlib.h>

int fatorial(n)
{
    if (n == 1)
        return 1;
    else
        return n * fatorial(n - 1);
}

int main(void)
{
    int valor;
    printf("Entre com o valor para calcular o fatorial..: ");
    scanf(" %d", &valor);

    printf("O fatorial de %d e ..: %d", valor, fatorial(valor));

    return 0;
}
