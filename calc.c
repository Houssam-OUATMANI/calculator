#include <stdio.h>

int main(void)
{
    float number1;
    float number2;
    char ops;
    printf("Entrer un numero \n");
    scanf("%f", &number1);
    printf("entrer un seconde nombre \n");
    scanf("%f", &number2);
    printf("entrer le type d'operation + / x - \n");
    scanf("%s", &ops);

    if (ops == '+')
    {
        printf("les resultat est : %f", number1 + number2);
    }
    else if (ops == '/' || ops == ':')
    {
        printf("les resultat est : %f", number1 / number2);
    }
    else if (ops == 'x' || ops == '*')
    {
        printf("les resultat est : %f", number1 * number2);
    }
    else if (ops == '-' || ops == '_')
    {
        printf("les resultat est : %f", number1 - number2);
    }
    else
    {
        printf("les resultat est : %f", number1 + number2);
        printf("\nles resultat est : %f", number1 / number2);
        printf("\nles resultat est : %f", number1 * number2);
        printf("\nles resultat est : %f", number1 - number2);
    }

    return 0;
}