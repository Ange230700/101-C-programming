#include <stdio.h>

void printDistinct(int Tableau[], int NombreElementsDuTableau)
{
    int IndexElementDuTableau = 0;
    // Pick all elements one by one
    for (IndexElementDuTableau = 0; IndexElementDuTableau < NombreElementsDuTableau; IndexElementDuTableau++)
    {
        // Check if the picked element is already printed
        int IndexAutreElementDuTableau;
        for (IndexAutreElementDuTableau = 0; IndexAutreElementDuTableau < IndexElementDuTableau; IndexAutreElementDuTableau++)
        {
            if (Tableau[IndexElementDuTableau] == Tableau[IndexAutreElementDuTableau])
            {
                break;
            }
        }
        // If not printed earlier, then print it
        if (IndexElementDuTableau == IndexAutreElementDuTableau)
            printf("%d ", Tableau[IndexElementDuTableau]);
    }
}

int main()
{
    int TailleDuTableau, IndexElementDuTableau;
    printf("Enter array size :\t");
    scanf("%d", &TailleDuTableau);

    int Tableau[TailleDuTableau];

    printf("Enter %d array elements :\n", TailleDuTableau);
    for (IndexElementDuTableau = 0; IndexElementDuTableau < TailleDuTableau; IndexElementDuTableau++)
    {
        printf("Element %d :\t", IndexElementDuTableau + 1);
        scanf("%d", &Tableau[IndexElementDuTableau]);
    }


    printf("\n\nDistinct/Unique array elements : \n");

    int NombreElementsDuTableau = sizeof(Tableau) / sizeof(Tableau[0]);
    printDistinct(Tableau, NombreElementsDuTableau);

    return 0;
}