#include <iostream>
int main()
{
    int numero;
    int i;
    int Resultado;

    scanf_s("%i", &numero);
    for (i = 0; i <= 10; i++)
    {
        if (i != 0)
        {
            Resultado = i * numero;
            printf("El resultado de %i por %i es %i\n", numero, i, Resultado);
        }
    }
}