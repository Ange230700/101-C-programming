#include <stdio.h>

const int TailleMaximaleDuTableau = 3;

int main()
{

    int TableauEntiers[] = {10, 100, 200};
    int IndexElement;
    int* PointeurSurTableauEntiers;

    /* let us have array address in pointer */
    PointeurSurTableauEntiers = &TableauEntiers[TailleMaximaleDuTableau - 1];

    for (IndexElement = TailleMaximaleDuTableau; IndexElement > 0; IndexElement--)
    {

        printf("Address of TableauEntiers[%d] = %p\n", IndexElement, PointeurSurTableauEntiers);
        printf("Value of TableauEntiers[%d] = %d\n", IndexElement, *PointeurSurTableauEntiers);
        /*
        Faire attention à comment se présente l'adresse de la variable pointée
        et le contenu de la variable pointée.
        */

        /* move to the previous location */
        PointeurSurTableauEntiers--;

    }

    return 0;
}