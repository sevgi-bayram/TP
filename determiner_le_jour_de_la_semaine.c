#include <stdio.h>

int	main(void)
{
    unsigned jour;

    printf("Entrez un jour : ");
    scanf("%u", &jour);

    switch ((jour - 1) % 7)
    {
    case 0:
        printf("C'est un samedi\n");
        break;

    case 1:
        printf("C'est un dimanche\n");
        break;

    case 2:
        printf("C'est un lundi\n");
        break;

    case 3:
        printf("C'est un mardi\n");
        break;

    case 4:
        printf("C'est un mercredi\n");
        break;

    case 5:
        printf("C'est un jeudi\n");
        break;

    case 6:
        printf("C'est un vendredi\n");
        break;
    }
    
    return 0;
}