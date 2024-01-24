#include <stdio.h>

int main()
{
    float a;
    float b;
    float c;
    printf("Scrivere tre numeri, che siano uno diverso dall'altro\n");
    printf("Scrivi un numero: \n");
    scanf("%f", &a);
    printf("Scrivi un numero: \n");
    scanf("%f", &b);
    printf("Scrivi un numero: \n");
    scanf("%f", &c);
    if( (a < b) && (b<c) )
    {
        printf("L'ordine è: %f, %f, %f", a, b, c);
    }
    else if ( ( a < c) && (c < b) )
    {
        printf("L'ordine è: %f, %f, %f", a, c, b);
    }
    else if ( (b < a) && (a < c) )
    {
        printf("L'ordine è: %f, %f, %f", b, a ,c);
    }
     else if ( (b < c) && (c < a) )
    {
        printf("L'ordine è: %f, %f, %f", b, c ,a);
    }
     else if ( (c < a) && (a < b) )
    {
        printf("L'ordine è: %f, %f, %f", c, a ,b);
    }
    else if ( ( c < b) && (b < a) )
    {
        printf("L'ordine è: %f, %f, %f", c, b ,a);
    }
    else
    {
        printf("errore");
    }

}
