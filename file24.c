#include <stdio.h>

void cubo ()
{
    int numero;
    printf("inserisci un numero\n");
    scanf("%d", &numero);
    int cubo;
    cubo = numero * numero * numero;
    printf("cubo = %d\n", cubo);
}
int main()
{
    printf("ciao\n");
    cubo();
    cubo();
    cubo();
    return(0);
}