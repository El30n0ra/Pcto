#include <stdio.h>

int main ()
{
    int anno;
    printf("Inserire anno: ");
    scanf("%i", &anno);
    if (( anno%4 == 0) && ( anno%100 != 0))
    {
        printf("L'anno è bisestile");
    }
    else if(anno%400 == 0)
    {
        printf("l'anno è bisestile");
    }
    else
    {
        printf("L'anno non è bisestile");
    }
}