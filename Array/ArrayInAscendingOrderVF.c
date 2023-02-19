#include <stdio.h>

int main()
/*
Ce programme permet de ranger les éléments d'un tableau
dans l'ordre croissant.
*/
{

    int IndexElementDuTableau, IndexAutreElementDuTableau, VariablePourEchange, NombreElementsDuTableau, TableauEntiers[10];

    printf("Entrer le nombre de valeurs a inserer dans le tableau (ce nombre ne doit pas depasser 10) :\t");
    /*
    On peut upgrade le programme de telle sorte qu'on puisse entrer le nombre d'entiers qu'on désire
    Je vais faire cel lors de la prochaine mise à jour.
    */
    scanf("%d", &NombreElementsDuTableau);
    printf("Enter the numbers \n");

    for (IndexElementDuTableau = 0; IndexElementDuTableau < NombreElementsDuTableau; ++IndexElementDuTableau)
    {
        printf("\tElement %d :\t", IndexElementDuTableau + 1);
        scanf("%d", &TableauEntiers[IndexElementDuTableau]);
    }

    for (IndexElementDuTableau = 0; IndexElementDuTableau < NombreElementsDuTableau; ++IndexElementDuTableau)
    {
        for (IndexAutreElementDuTableau = IndexElementDuTableau + 1; IndexAutreElementDuTableau < NombreElementsDuTableau; ++IndexAutreElementDuTableau)
        {
            if (TableauEntiers[IndexElementDuTableau] > TableauEntiers[IndexAutreElementDuTableau])
            {
                VariablePourEchange = TableauEntiers[IndexElementDuTableau];
                TableauEntiers[IndexElementDuTableau] = TableauEntiers[IndexAutreElementDuTableau];
                TableauEntiers[IndexAutreElementDuTableau] = VariablePourEchange;
            }
        }
    }

    printf("The numbers arranged in ascending order are given below \n\n");

    for (IndexElementDuTableau = 0; IndexElementDuTableau < NombreElementsDuTableau; ++IndexElementDuTableau)
    {
        printf("%d\t", TableauEntiers[IndexElementDuTableau]);
    }
    printf("\n\n");
    return 0;
}