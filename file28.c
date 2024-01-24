#include <stdio.h>

int main()
{
    int luna = 1969;
    float nascita;
    printf("In che anno sei nato: \n");
    scanf("%f", &nascita);
    float x = luna - nascita;
    float y = nascita - luna;
    if(x == 0)
    {
        printf("sei nato nell'anno in cui per la prima volta l'uomo è andato sulla Luna\n");
    }
    else if(luna > nascita)
    {
        printf("Sei nato %f anni prima dell'anno in cui per la prima volta l'uomo è andato sulla Luna\n", x);
    }
    else if( luna < nascita)
    {
        
        printf("Sei nato %f anni dopo l'anno in cui per la prima volta l'uomo è andato sulla Luna\n", y);
    }
    else
    {
        printf("errore");
    }
    return(0);
}