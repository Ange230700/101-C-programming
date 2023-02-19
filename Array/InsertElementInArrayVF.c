#include <stdio.h>

int main()
/*
PROGRAMME A VOIR PLUS EN DETAIL.
*/
{
    int array[100], positionPourInsertion, IndexElement, NombreElementDuTableau, value;

    printf("Enter number of elements in array :\t");
    scanf("%d", &NombreElementDuTableau);

    printf("Enter %d elements : ", NombreElementDuTableau);

    for (IndexElement = 0; IndexElement < NombreElementDuTableau; IndexElement++)
    {
        printf("\n\n\tElement %d :\t", IndexElement + 1);
        scanf("%d", &array[IndexElement]);
    }

    printf("\n\nEnter the location where you wish to insert an element :\t");
    scanf("%d", &positionPourInsertion);

    printf("\n\nEnter the value to insert :\t");
    scanf("%d", &value);

    for (IndexElement = NombreElementDuTableau - 1; IndexElement >= positionPourInsertion - 1; IndexElement--)
    {
        array[IndexElement + 1] = array[IndexElement];
    }

    array[positionPourInsertion - 1] = value;

    printf("Resultant array is :\n\n");

    for (IndexElement = 0; IndexElement <= NombreElementDuTableau; IndexElement++)
    {
        printf("%d\t", array[IndexElement]);
    }

    return 0;
}