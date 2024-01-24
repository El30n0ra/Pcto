#include <stdio.h>

int main()
{
    char lettera;
    printf("scrivere una lettera: \n");
    scanf("%c", &lettera);
        if (lettera == 'a' || lettera == 'e' ||lettera == 'i' || lettera == 'o' || lettera == 'u' )
        {
            printf("La lettera è una vocale\n");
        }
        else if(lettera == 'b' || lettera == 'c' ||lettera == 'd' || lettera == 'f' || lettera == 'g'|| lettera == 'h' || lettera == 'j' ||lettera == 'k' || lettera == 'l' || lettera == 'm' )
        {
            printf("La lettera è una consonante\n");
        }
        else if(lettera == 'n' || lettera == 'p' ||lettera == 'q' || lettera == 'r' || lettera == 's'|| lettera == 't' || lettera == 'v' ||lettera == 'w' || lettera == 'x' || lettera == 'y' )
        {
            printf("La lettera è una consonante\n");
        }
        else if(lettera == 'z')
        {
            printf("La lettera è una consonante\n")
        }
        else 
        {
            printf("Non è una lettera");
        }
    
    return(0);
}