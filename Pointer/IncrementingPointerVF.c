#include <stdio.h>

const int TailleMaximaleDuTableau = 3;

int main()
{

    int TableauEntiers[] = {10, 100, 200};
    int IndexElement;
    int* PointeurSurTableauEntiers;

    /* let us have array address in pointer */
    PointeurSurTableauEntiers = TableauEntiers;

    for (IndexElement = 0; IndexElement < TailleMaximaleDuTableau; IndexElement++)
    {

        printf("Address of var[%d] = %p\n", IndexElement, PointeurSurTableauEntiers);
        printf("Value of var[%d] = %d\n", IndexElement, *PointeurSurTableauEntiers);

        /* move to the next location */
        PointeurSurTableauEntiers++;

    }

    return 0;
}