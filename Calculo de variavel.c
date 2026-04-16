#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int variavel, expoente, potencia;
    printf("Digite a Variavel: ");
    scanf("%d",&variavel);
    printf("Digite o expoente: ");
    scanf("%d",&expoente);
    potencia=pow(variavel,expoente);
    printf("o numero %d elevado a %d tem resultado %d", variavel, expoente, potencia);
    return 0;
}
