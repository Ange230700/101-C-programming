#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NombreElements, IndexElements, Somme = 0;
    int* PointeurSurTableauEntiers;
    printf("Enter number of elements: ");
    scanf("%d", &NombreElements);

    //memory allocated using malloc
    PointeurSurTableauEntiers = (int*) malloc(NombreElements * sizeof(int));
    /*
    Pour l'allocation de la mémoire, on fait la conversion vers un pointeur sur un tableau d'entiers
    Car à la base, il s'agit d'un pointeur sur le vide.
    */
   
    if (PointeurSurTableauEntiers == NULL)
    {
        printf("Error! memory not allocated.");
        return 0;
    }

    printf("Enter elements of array: \n");
    for (IndexElements = 0; IndexElements < NombreElements; ++IndexElements)
    {
        scanf("%d", PointeurSurTableauEntiers + IndexElements);
        Somme += *(PointeurSurTableauEntiers + IndexElements);
    }

    printf("Elements of array are :\n");
    for (IndexElements = 0; IndexElements < NombreElements; IndexElements++)
    {
        printf("%d ", PointeurSurTableauEntiers[IndexElements]);
    }

    //freeing memory of ptr allocated by malloc
    free(PointeurSurTableauEntiers);
    return 0;
}