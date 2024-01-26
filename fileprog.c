#include <stdio.h>

int main()
{
    int genere;
    int temp;
    int occasione;
    printf ("Ciao! Scegli il tuo genere:\n1 x uomo \n2 x donna \n");
    scanf ("%d", &genere);
    while( genere == 1)
    {
        printf("Qual è la temperatura in gradi °C: \n1 x sotto zero \n2 x 0-10 \n3 x 10-20 \n4 x 20-30 \n5 x oltre 30 \n");
        scanf("%d", &temp);
        printf ("Scegli l'occasione: \n1 x scuola, università e ufficio \n2 x tempo libero (pranzo fuori, uscite con amici...) \n3 x appuntamento e/o cena fuori \n");
        scanf("%d", &occasione);
        if(occasione == 1)
        {
           
            if(temp == 1)
            {
                printf ("Potresti indossare un maglione in lana o pile, pantaloni termici, stivali impermeabili e un cappotto pesante.\n ");
                printf ("Ricorda di usare accessori come dei guanti, una sciarpa e un cappello per proteggerti dal freddo\n");
                printf ("Porta con te l'ombrello in caso di pioggia\n");
                break;
            }
            else if(temp == 2)
            {
                printf ("Potresti indossare una maglietta a maniche lunghe come primo strato, seguita da un maglione o da una felpa, un paio di jeans e una giacca come strato esterno.\n");
                printf ("Ricorda di indossare scarponi resistenti, un cappello, una sciarpa e dei guanti per proteggerti dal freddo\n");
                printf ("Porta con te l'ombrello in caso di pioggia\n");
                break;
            }
            else if(temp == 3)
            {
                printf ("Potresti indossare una maglietta a maniche lunghe o una camicia leggera, abbinata a un maglione o una giacca a vento. Indossa pantaloni o jeans e sneakers comode.\n");
                printf ("Porta con te l'ombrello in caso di pioggia e una sciarpa leggera nel caso in cui la temperatura scenda\n");
                break;
            }
            else if(temp == 4)
            {
                printf ("Potresti indossare una maglietta a maniche corte, una camicia leggera o una polo, abbinata a pantaloni traspiranti. Indossa scarpe da ginnastica. \n");
                printf ("Ricorda di applicare la crema solare\n");
                break;
            }
            else if(temp == 5)
            {
                printf ("Potresti indossare una maglietta a maniche corte di cotone o di lino oppure una polo, abbinata a pantaloni leggeri.\n");
                break;
            }
            else
            {
                printf ("errore\n");
            }
        }
        else if(occasione == 2)
        {
            if(temp == 1)
            {
                printf ("Potresti indossare un maglione in lana, pantaloni termici e un cappotto pesante \n");
                printf ("Ricorda di usare accessori come un cappello, ua sciarpa e dei guanti se il tuo appuntamento è all'aperto o se pensi di percorrere un tratto a piedi\n");
                printf ("Porta con te l'ombrello in caso di pioggia\n");
                break;
            }
            else if(temp == 2)
            {
                printf ("Potresti indossare una maglietta a maniche lunghe come primo strato, seguita da una felpa, un paio di jeans e una giacca come strato esterno.\n");
                printf ("Ricorda di indossare accessori come un cappello, una sciarpa e dei guanti per proteggerti dal freddo\n");
                printf ("Porta con te l'ombrello in caso di pioggia\n");
                break;
            }
            else if(temp == 3)
            {
                printf ("Potresti indossare una maglietta a maniche lunghe, abbinata a un maglione o una giacca a vento. Indossa un paio di jeans e sneakers comode.\n");
                printf ("Porta con te l'ombrello in caso di pioggia e una sciarpa leggera nel caso in cui la temperatura scenda\n");
                break;
            }
            else if(temp == 4)
            {
                printf ("Potresti indossare una maglietta a maniche corte o una polo, abbinata a pantaloni traspiranti. Indossa scarpe da ginnastica o sandali. \n");
                printf ("Ricorda di scegliere colori chiari che riflettano la luce solare, di applicare la crema solare e usare accessori come berretti e occhiali da sole\n");
                break; 
            }
            else if(temp == 5)
            {
                printf( "Potresti indossare una maglietta a maniche corte di cotone o di lino, abbinata a pantaloncini leggeri e scarpe da ginnastica.\n");
                printf ("Ricorda di scegliere colori chiari che riflettano la luce solare, di applicare la crema solare e usare accessori come berretti e occhiali da sole\n");
                break; 
            }
            else
            {
                printf ("errore\n");
            }
        }
        else if(occasione == 3)
        {
            if(temp == 1)
            {
                printf ("Potresti indossare una camicia come primo strato, abbinata ad un maglione in cachemire, pantaloni in lana, un cappotto elegante e degli stivaletti in pelle assicurandoti che siano impermeabili in caso di pioggia\n");
                printf ("Ricorda di indossare accessori come guanti e sciarpa per proteggerti dal freddo durante il tragitto verso il luogo dell'appuntamento\n");
                printf ("Porta con te l'ombrello in caso di pioggia\n");
                break;
            }
            else if(temp == 2)
            {
                printf ("Potresti indossare una camicia come primo strato, abbinata a un maglione di lana, pantaloni chino e un cappotto leggero\n");
                printf ("Ricorda di indossare accessori come una cintura in pelle, un orologio e una sciarpa per proteggerti dal freddo durante il tragitto verso il luogo dell'appuntamento\n");
                printf ("Porta con te l'ombrello in caso di pioggia\n");
                break;
            }
            else if(temp == 3)
            {
                printf ("Potresti indossare una camicia e un maglione di cotone, abbinate a un blazer e pantaloni chino.\n");
                printf ("Aggiungi pochi accessori come un orologio classico e una cintura coordinata\n");
                printf ("Porta con te l'ombrello in caso di pioggia\n");
                break;
            }
            else if(temp == 4)
            {
                printf ("Potresti indossare una camicia in lino o in cotone e pantaloni chino, abbinati a mocassini. Se la serata si raffredda puoi portare con te una giacca leggera\n");
                printf ("Completa il look con qualche accessorio come un orologio e un bracciale\n");
                break;
            }
            else if(temp == 5)
            {
                printf ("Potresti indossare una camicia in lino o in cotone, un pantalone di lino e delle scarpe eleganti\n");
                printf ("Aggiungi pochi accessori come un orologio classico e una cintura coordinata\n");
                printf ("Porta con te anche degli occhiali da sole se l'evento si svolge all'aperto o in un luogo particolarmente luminoso\n");
                break;
            }
            else
            {
                printf("errore\n");
            }
        }
        else
        {
            printf("errore\n");
        }
    }
    while(genere == 2)
    {
        int occasione;
        printf("Qual è la temperatura in gradi °C: \n1 x sotto zero \n2 x 0-10 \n3 x 10-20 \n4 x 20-30 \n5 x oltre 30 \n");
        scanf("%d", &temp);
        printf ("Scegli l'occasione: \n1 x scuola, università e ufficio \n2 x tempo libero (pranzo fuori, uscite con amici...) \n3 x appuntamento e/o cena fuori \n");
        scanf("%d", &occasione);
        if(occasione == 1)
        {
            if(temp == 1)
            {
                printf ("Potresti indossare un maglione in lana o pile, pantaloni termici oppure una gonna di lana con calze pesanti, stivali impermeabili e un cappotto pesante.\n ");
                printf ("Ricorda di usare accessori come dei guanti, una sciarpa e un cappello per proteggerti dal freddo\n");
                printf ("Porta con te l'ombrello in caso di pioggia\n");
                break;
            }
            else if(temp == 2)
            {   
                printf ("Potresti indossare una maglietta a maniche lunghe come primo strato, seguita da un maglione o da una felpa, un paio di jeans o pantaloni palazzo con sotto calze pesanti e una giacca come strato esterno.\n");
                printf ("Ricorda di indossare scarponi resistenti, un cappello, una sciarpa e dei guanti per proteggerti dal freddo\n");
                printf ("Porta con te l'ombrello in caso di pioggia\n");
                break;
            }
            else if(temp == 3)
            {
                printf ("Potresti indossare una maglietta a maniche lunghe o una camicia leggera, abbinata a un maglione o una giacca a vento. Indossa pantaloni o jeans, oppure una gonna lunga  e sneakers comode.\n");
                printf ("Altrimenti potresti indossare un vestito lungo, con maniche lunghe e collo alto, potresti indossare una sciarpa e comme scarpe delle sneakeres\n");
                printf ("Porta con te l'ombrello in caso di pioggia\n");
                break;
            }
            else if(temp == 4)
            {
                printf ("Potresti indossare una maglietta a maniche corte, una camicia leggera o una polo, abbinata a dei pantaloni lunghi (in materiale leggero). Indossa scarpe da ginnastica. \n");
                printf ("Altrimenti potresti indossare un crop top con dei jeans a vita alta e come scarpe sempre delle sneakers\n");
                break;
            }
            else if(temp == 5)
            {   
                printf ("Potresti indossare una maglietta a maniche corte, una camicia leggera o una polo, abbinata a pantaloni lunghi in cotone o in lino. Indossa scarpe da ginnastica. \n");
                printf ("Completa il look con accessori come collane, bracciali e anelli\n");
                break;
            }
            else
            {
                printf("errore\n");
            }
        }
        else if(occasione == 2)
        {
            if(temp == 1)
            {
                printf ("Potresti indossare un maglione in lana o pile, pantaloni termici oppure una gonna di lana con calze pesanti, stivali impermeabili e un cappotto pesante o una pelliccia.\n ");
                printf ("Ricorda di usare accessori come dei guanti, una sciarpa e un cappello per proteggerti dal freddo.\n");
                printf ("Porta con te l'ombrello in caso di pioggia\n");
                break;
            }
            else if(temp == 2)
            {
                printf ("Potresti indossare una maglietta a maniche lunghe come primo strato, seguita da un maglione o da una felpa, un paio di jeans o pantaloni palazzo con sotto calze pesanti e una giacca come strato esterno.\n");
                printf ("Ricorda di indossare scarponi resistenti, un cappello, una sciarpa e dei guanti per proteggerti dal freddo\n");
                printf ("Porta con te l'ombrello in caso di pioggia\n");
                break;
            }
            else if(temp == 3)
            {
                printf ("Potresti indossare una maglietta a maniche lunghe, abbinata a un maglione o una giacca a vento. Indossa pantaloni o jeans, oppure una gonna lunga e sneakers comode.\n");
                printf ("Altrimenti potresti indossare un vestito lungo, con maniche lunghe e collo alto\n");
                printf ("Completa il look con degli accessori e porta con te l'ombrello in caso di pioggia\n");
                break;
            }
            else if(temp == 4)
            {
                printf ("Potresti indossare una maglietta a maniche corte, abbinata a dei pantaloncini o pantaloni lunghi leggeri. Indossa scarpe da ginnastica o un paio di sandali. \n");
                printf ("Altrimenti potresti indossare un crop top con dei jeans a vita alta e come scarpe sempre delle sneakers\n");
                printf ("completa il look con degli accessori e ricorda di portare con te degli occhiali da sole e un berretto\n");
                break;
            }
            else if(temp == 5)
            {
                printf ("Potresti indossare una maglietta a maniche corte abbinata a dei pantaloncini e un paio di scarpe da ginnastica o dei sandali. \n");
                printf ("Altrimenti potresti indossare un crop top con dei jeans a vita alta e come scarpe sempre delle sneakers\n");
                printf ("completa il look con degli accessori e ricorda di portare con te degli occhiali da sole e un berretto\n");
                break;
            }
            else 
            {
                printf("errore\n");
            }
        }
        else if(occasione == 3)
        {
            if(temp == 1)
            {
                printf ("Potresti indossare un abito lungo in lana, dei collant termici color carne e stivali alti. Completa il look con un cappotto pesante o una pelliccia\n");
                printf ("Aggiungi degli accessori come una sciarpa, dei guanti di pelle e una borsa coordinata\n");
                printf ("Porta con te l'ombrello in caso di pioggia\n");
                break;
            }
            else if(temp == 2)
            {
                printf ("Potresti indossare un abito lungo di lana o un tailleur, dei collant color carne e degli stivali. Completa il look con un cappotto pesante o una pelliccia\n");
                printf ("Aggiungi degli accessori come una sciarpa, dei guanti di pelle e una borsa coordinata\n");
                printf ("Porta con te l'ombrello in caso di pioggia\n");
                break;
            }
            else if(temp == 3)
            {
                printf ("Potresti indossare un abito midi o lungo e completarlo con una giacca o un blazer. Aggiungi un foulard e accessori come dei gioielli e una borsa\n");
                printf ("Porta con te l'ombrello in caso di pioggia\n");
                break;
            }
            else if(temp == 4)
            {
                printf ("Potresti indossare un abito leggero in seta o in cotone, dei sandali e uno scialle \n");
                printf ("In alternativa puoi optare per una gonna o dei pantaloni a palazzo e una camicetta di seta. Completa il look con una pochette e dei gioielli\n");
                break;
            }
            else if(temp == 5)
            {
                printf ("Potresti indossare un vestito leggeto in lino, seta o cotone, dei sandali o dei tacchi\n");
                printf ("Completa il look con pochi accessori e una borsetta");
                break;
            }
            else 
            {
                printf ("errore\n");
            }
        }
        else
        {
            printf("errore\n");
        }
    }
return(0);
}
