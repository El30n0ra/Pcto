#include <stdio.h>

int main()
{
    int valore1;
    int valore2;

    printf("inserire due valori\n");
    scanf("%d", &valore1);
    scanf("%d", &valore2);

    if( valore1 > valore2)
    { 
        printf("%d > %d", valore1, valore2);
    }

    else
    {
        printf("%d < %d", valore1, valore2);
    }
    return(0);
}