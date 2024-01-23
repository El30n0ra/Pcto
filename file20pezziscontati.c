#include <stdio.h>

int main()
{

    int pezzo;
    int totale;
    int sconto;
    printf(">Quanti pezzi sono stati comprati: \n");
    scanf("%i", &pezzo);
    while(pezzo >0)
    {
        totale = pezzo * 5; 
        printf("prezzo totale: %i\n", totale);
    if ((pezzo >0) && (pezzo <=30))
    {
            printf("prezzo scontato: %i\n", totale);
    }
    else  if ((pezzo >30) && ( pezzo<=50))
    {
            int scontouno = ((totale * 10)/ 100 );
            printf("prezzo scontato a: %i\n", scontouno);
    }
        else if ( pezzo > 50)
    {
        int scontodue = ((totale * 15)/ 100 );
        printf("prezzo scontato a: %i\n", scontodue);
    }
        else 
    {
        printf("prezzo non scontato\n");
    }
    printf(">Quanti pezzi sono stati comprati: \n");
    scanf("%i", &pezzo);
    }
    return(0);
}