#include <stdio.h>

int    main(void)
{
    unsigned    jour;
    unsigned    mois;
    unsigned    an;

    printf("Entrez une date (jj/mm/aaaa) : ");
    scanf("%u/%u/%u", &jour, &mois, &an);

    unsigned njours = (an - 1) * 365;

    if (an > 1582)
    {
        njours += ((an - 1) / 4);
        njours -= ((an - 1) / 100);
        njours += ((an - 1) / 400);
        njours += 2;
    }
    else /* Calendrier Julien */
        njours += ((an - 1) / 4);

    njours += (mois - 1) * 31;

    switch (mois)
    {
    case 12:
        --njours;
    case 11:
    case 10:
        --njours;
    case 9:
    case 8:
    case 7:
        --njours;
    case 6:
    case 5:
        --njours;
    case 4:
    case 3:
        if (an > 1582)
        {
            if (an % 4 == 0 && (an % 100 != 0 || an % 400 == 0))
                njours -= 2;
            else
                njours -= 3;
        }
        else
        {
            if (an % 4 == 0)
                njours -= 2;
            else
                njours -= 3;
        }
        break;
    }
    
    njours += (jour - 1);

    switch (njours % 7)
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
