#include<stdio.h>

int main()
{
    //variable declaration
    int size, Tableau1[10], Tableau2[10], count = 0, IndexElementTableau1, IndexElementTableau2;

    //take user input for array size
    printf("Enter number of elements you want to insert in array : ");
    scanf("%d", &size);

    //user input for array elements
    printf("Enter %d integers : \n", size);

    for (IndexElementTableau1 = 0; IndexElementTableau1 < size; IndexElementTableau1++)
    {
        scanf("%d", &Tableau1[IndexElementTableau1]);
    }

    //logic to check and remove duplicate elements from array
    for (IndexElementTableau1 = 0; IndexElementTableau1 < size; IndexElementTableau1++)
    {

        for (IndexElementTableau2 = 0; IndexElementTableau2 < count; IndexElementTableau2++)
        {
            if (Tableau1[IndexElementTableau1] == Tableau2[IndexElementTableau2])
            {
                break;
            }
        }

        if (IndexElementTableau2 == count)
        {
            Tableau2[count] = Tableau1[IndexElementTableau1];
            count++;
        }
    }

    //to print array elements after removing duplicate elements
    printf("Array obtained after removing duplicate elements : \n");

    for (IndexElementTableau1 = 0; IndexElementTableau1 < count; IndexElementTableau1++)
    {
        printf("%d\n", Tableau2[IndexElementTableau1]);
    }

    return 0;
}