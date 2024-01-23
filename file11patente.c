#include <stdio.h>

int main()
{ 
    int anni; 
    printf("Quanti anni ha l'utente: ");
    scanf("%i", &anni);
    if(anni >= 18)
    {
        printf("Puoi prendere la patente");
    }
    else
    {
        printf(" Non puoi prendere la patente");
    }
    return(0);

}