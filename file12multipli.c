#include <stdio.h>

int main()
{
    int x; 
    int y; 
    printf("fornire due valori: ");
    scanf("%i", &x);
    scanf("%i", &y);
    if ( x / y| 0 )
    {
        printf("il primo valore è un multipo del secondo");
    }
    else
    {
        printf("Il primo valore non è multiplo del secondo");
    }
}