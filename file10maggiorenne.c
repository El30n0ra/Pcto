#include <stdio.h>

int main()
{
    int anniutente;
    printf("insirire la propria età: ");
    scanf("%i", &anniutente);
    if( anniutente >= 18)
    {
        printf("sei maggiorenne");
    }
    else
    {
        printf(" sei minorenne");
    }
}