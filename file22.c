#include <stdio.h>

int main()
{
    int base;
    int altezza;
    int catdue;
    int cattre;
    printf("misura dell' altezza: \n");
    scanf("%i", &altezza);
    printf("misura della base (= lato uno): \n");
    scanf("%i", &base);
    printf("misura del lato due: \n");
    scanf("%i", &catdue);
    printf("misura del lato tre: \n");
    scanf("%i", &cattre);
    int area = ((base * altezza)/2);
    int perimetro = (base + catdue + cattre);
    printf("Area = %i\n", area);
    printf("Perimetro = %i\n",perimetro);

}