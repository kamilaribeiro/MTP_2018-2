/* P1. */
/* seu_nome : Kamila Borba Ribeiro*/
/* sua_matricula : 11811EBI026*/
#include <stdio.h>

int main()
{
    int estado = 0, i = 0;
    char bin[256];
    printf("\nDigite um numero em binario");
    scanf("%s", bin);
    while(bin[i] != '\0')
    {
    if(bin[i] == '0')
       {
           if(estado == 0);
            else if(estado == 1) estado = 2;
            else if(estado == 2) estado = 1;
            i++;
        }
        else if(bin[i] == '1')
        {
            if(estado == 0) estado = 1;
            else if(estado == 1) estado = 0;
            else if(estado == 2);
            i++;
        }
        else
        {
            printf("\nNumero digitado nao e um numero binario");
            return 0;
        }
    }
    if(estado == 0) printf("\n O numero digitado %s e multiplo de 3", bin);
    else printf("\n O numero binario digitado %s nao e multiplo de 3", bin);
    return 0;
} 
