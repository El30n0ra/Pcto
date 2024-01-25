#include <stdio.h> 
#include <math.h>


    

void solmagg (int a, int b, int c, int delta)
{
    double radice = ( sqrt (delta));
    int soluno = ((-b + radice) / 2 * a);
    int soldue = ((-b - radice) / 2 * a);
    printf("x1 = %d\n", soluno);
    printf("x2 = %d\n", soldue);
}

void solug (int a, int b, int c)
{
    int soltre = ((-b ) / 2 * a);
    printf("x1 = x2 = %d\n", soltre);
}

void solmin(int a, int b, int c)
{
    printf("Non ci sono soluzioni nei numeri reali\n");
}

int main()
{
    int a;
    int b;
    int c;
    printf("Scrivere tre valori\n");
    printf("primo valore: \n");
    scanf("%i", &a);
    printf("secondo valore: \n");
    scanf("%i", &b);
    printf("terzo valore: \n");
    scanf("%i", &c);

    int delta = (b * b - (4 * a * c));
    if (delta > 0)
    {
         solmagg( a, b, c, delta);
    }
    else if (delta == 0)
    {
        solug( a, b, c);
    }
    else if (delta < 0)
    {
        solmin( a, b, c);
    }
    else
    {
        printf("errore");
    }
    return(0);
}