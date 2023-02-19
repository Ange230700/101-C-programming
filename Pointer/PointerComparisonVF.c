#include <stdio.h>

const int TailleDuTableau = 3;

int main()
{

    int Tableau[] = {10, 100, 200};
    int Index;
    int* PointeurSurTabeau;

    /* let us have address of the first element in pointer */
    PointeurSurTabeau = Tableau;
    Index = 0;

    while (PointeurSurTabeau <= &Tableau[TailleDuTableau - 1])
    {

        printf("Address of Tableau[%d] = %p\n", Index, PointeurSurTabeau);
        printf("Value of Tableau[%d] = %d\n", Index, *PointeurSurTabeau);

        /* point to the previous location */
        PointeurSurTabeau++;
        Index++;

    }

    return 0;
}