#include <stdio.h>

int main()
{
    int array[100], maximum, size, IndexElement, locationDuMaximum = 1;

    printf("Enter the number of elements in array :\t");
    scanf("%d", &size);

    printf("Enter %d integers :\n\n", size);

    for (IndexElement = 0; IndexElement < size; IndexElement++)
    {
        printf("\n\tElement %d :", IndexElement + 1);
        scanf("%d", &array[IndexElement]);
    }
    maximum = array[0];

    for (IndexElement = 1; IndexElement < size; IndexElement++)
    {
        if (array[IndexElement] > maximum)
        {
            maximum = array[IndexElement];
            locationDuMaximum = IndexElement + 1;
        }
    }

    printf("\n\nMaximum element is present at location %d and its value is %d.\n\n", locationDuMaximum, maximum);
    return 0;
}