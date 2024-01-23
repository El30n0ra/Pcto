#include <stdio.h>

int main()
{
    int uno;
    int due;
    int tre;
    printf("Fornire tre numeri\n");
    printf("valore uno = ");
    scanf("%i", &uno);
    printf("valore due = ");
    scanf("%i", &due);
    printf("valore tre = ");
    scanf("%i", &tre);
    int differenzauno = due - uno;
    int differenzadue = tre - due;
    if (differenzauno == differenzadue)
    {
        printf("è una progressione aritmetica");
    }
    else
    {
        printf("non è una progressione aritmetica");
    }
}