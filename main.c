#include <stdio.h>
#include <stdlib.h>

int fatorial(numero) // esta funcao calcula um fatorial
{               // de um numero inserido na main
    if (numero == 1)
        return 1;
    else
        return numero * fatorial(numero - 1);
}

int main(void)
{
    int valor;
    printf("Entre com o valor para calcular o fatorial..: ");
    scanf(" %d", &valor);

    printf("O fatorial de %d e ..: %d", valor, fatorial(valor));

    return 0;
}
