#include <stdio.h>

int main()
{
    int array[100], minimum, size, IndexElement, locationDuMinimum = 1;

    printf("Enter the number of elements in array :\t");
    scanf("%d", &size);

    printf("Enter %d integers :\n\n", size);

    for (IndexElement = 0; IndexElement < size; IndexElement++)
    {
        printf("\n\tElement %d :", IndexElement + 1);
        scanf("%d", &array[IndexElement]);
    }

    minimum = array[0];

    for (IndexElement = 1; IndexElement < size; IndexElement++)
    {
        if (array[IndexElement] < minimum)
        {
            minimum = array[IndexElement];
            locationDuMinimum = IndexElement + 1;
        }
    }

    printf("\n\nMinimum element is present at location %d and it's value is %d.\n\n", locationDuMinimum, minimum);
    return 0;
}