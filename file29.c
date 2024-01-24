#include <stdio.h>

int main()
{
    int numero;
    int x;
    printf("numero: \n");
    scanf("%i", &numero);

    x=2;
    while ( x < numero )
    {
        if(numero % x == 0)
        {
            printf("non è primo\n");
            break; 
        }
        else
        {
            x = x+1;
        }
        if(numero == x)
         { 
            printf("il numero è primo");
         }
    }
return(0);
}