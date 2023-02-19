#include<stdio.h>

int main()
{
    int Tableau[50], size, IndexElement, big, small;

    printf("\nEnter the size of the array (pas plus de 50): ");
    scanf("%d", &size);

    printf("\nEnter %d elements in to the array: ", size);
    for (IndexElement = 0; IndexElement < size; IndexElement++)
    {
        printf("\n\n\tElement %d :\t", IndexElement + 1);
        scanf("%d", &Tableau[IndexElement]);
    }

    big = Tableau[0];
    for (IndexElement = 1; IndexElement < size; IndexElement++)
    {
        if (big < Tableau[IndexElement])
        {
            big = Tableau[IndexElement];
        }
    }
    printf("Largest element: %d", big);

    small = Tableau[0];
    for (IndexElement = 1; IndexElement < size; IndexElement++)
    {
        if (small > Tableau[IndexElement])
        {
            small = Tableau[IndexElement];
        }
    }
    printf("\nSmallest element: %d", small);

    return 0;
}