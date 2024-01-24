#include <stdio.h>

int main()
{
    int uno; 
    int due; 
    int tre;
    printf("fornire lunghezza lato uno: \n");
    scanf("%i", &uno);
    printf("fornire lunghezza lato due: \n");
    scanf("%i", &due);
    printf("fornire lunghezza lato tre: \n");
    scanf("%i", &tre);
    if( (uno == due) && (due== tre) && (uno==tre))
    {
        printf("Il triangolo è equilatero\n");
    }
    else if((uno == due) && (uno != tre) && (due != tre))
    {
        printf("Il triangolo è isoscele\n");
    }
    else if((tre == due) && (uno != tre) && (due != uno))
    {
        printf("Il triangolo è isoscele\n");
    }
    else if((uno == tre) && (uno != due) && (due != tre))
    {
        printf("Il triangolo è isoscele\n");
    }
    else if( (uno != due) && (due != tre) && (tre != uno))
    {
        printf("il triangolo è scaleno\n");
    }
    else
    {
        printf("Non è un triangolo\n");
    }
}
    