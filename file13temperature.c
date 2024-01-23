#include <stdio.h>

int main()
{
    float gradiC;
    printf("Qual è la temperatura in gradi celsius: ");
    scanf("%f", &gradiC); 
    float gradiF = ((gradiC * 9) / 5) + 32;
    float gradiK = (gradiC + 32);
    printf("F = %f\n", gradiF);
    printf("K = %f\n", gradiK);
    if(gradiC < (-273,15))
    {
        printf("errore");
    }
    
    return(0);
}