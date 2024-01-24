#include <stdio.h>

void somma(float a, float b)
{
    float somma = a + b;
    printf(" Somma =%f \n", somma);
}

void differenza(float a, float b)
{
    float differenza = a - b;
    printf(" Differenza = %f \n", differenza);
}
void moltiplicazione(float a, float b)
{
    float moltiplicazione = a * b;
    printf(" Moltiplicazione = %f \n", moltiplicazione);
}
void divisione( float a, float b)
{
    float divisione = a/b;
    printf("Divisione = %f \n", divisione);
}

int main ()
{
    float x;
    float y;
    int operazione;
    printf("Inserisci due valori, il primo maggiore del secondo\n");
    printf("Inserire un primo valore: \n");
    scanf("%f", &x);
    printf("inserire un secondo valore: \n");
    scanf("%f", &y);
    printf("Che operazione vuoi fare?\n");
    printf("premere:\n 1 per la somma\n 2 per la differenza\n 3 per la moltiplicazione\n 4 per la divisione\n: ");
    scanf("%i", &operazione);
    if(operazione ==1)
    {
        somma(x, y);
    }
    else if(operazione == 2)
    {
        differenza(x, y);
    }
    else if(operazione==3)
    {
        moltiplicazione(x, y);
    }
    else if(operazione==4)
    {
        divisione(x, y);
    }
    else
    {
     printf("premere:\n 1 per la somma\n 2 per la differenza\n 3 per la moltiplicazione\n 4 per la divisione\n: ");   
    }

    return(0);

}