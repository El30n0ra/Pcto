#include <stdio.h>

int main()
{
    int catuno;
    int catdue;
    int cattre;
    printf("fornire tre dati\n");
    scanf("%i", &catuno);
    scanf("%i", &catdue);
    scanf("%i", &cattre);
    int uno = catuno + catdue;
    int due = catdue + cattre;
    int tre = catuno + cattre;
    if ((uno > cattre) && (due > catuno) && (tre > catdue))
    {
        printf("le misure sono cateti di un triangolo");
    }
    else
    {
        printf("Le misure non sono cateti di un triangolo");
    }
}