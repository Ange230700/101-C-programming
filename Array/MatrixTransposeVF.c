#include <stdio.h>

int main()
{
    int NombreDeLignes, NombreDeColonnes, NumeroDeLigne, NumeroDeColonne, matrix[10][10], transpose[10][10];

    printf("Enter the number of rows and columns of matrix : ");
    printf("\n\n\tNombre de lignes :\t");
    scanf("%d", &NombreDeLignes);
    printf("\n\n\tNombre de colonnes :\t");
    scanf("%d", &NombreDeColonnes);
    printf("Enter the elements of matrix : \n");

    for (NumeroDeLigne = 0; NumeroDeLigne < NombreDeLignes; NumeroDeLigne++)
    {
        for (NumeroDeColonne = 0; NumeroDeColonne < NombreDeColonnes; NumeroDeColonne++)
        {
            printf("\n\tLigne %d et Colonne %d :\t", NumeroDeLigne + 1, NumeroDeColonne + 1);
            scanf("%d", &matrix[NumeroDeLigne][NumeroDeColonne]);
        }
        printf("\n");
    }
    /*
    Une upgrade serait de rajouter du code pour afficher la matrice avant transposition.
    Je garde ça pour la prochaine mise à jour. (DEJA FAIT)
    */
   printf("Entered matrix is:\n");

   for (NumeroDeLigne = 0; NumeroDeLigne < NombreDeLignes; NumeroDeLigne++)
    {
        for (NumeroDeColonne = 0; NumeroDeColonne < NombreDeColonnes; NumeroDeColonne++)
        {
            printf("%d\t", matrix[NumeroDeLigne][NumeroDeColonne]);
        }
        printf("\n");
    }
    printf("\n\n");

    for (NumeroDeLigne = 0; NumeroDeLigne < NombreDeLignes; NumeroDeLigne++)
    {
        for (NumeroDeColonne = 0; NumeroDeColonne < NombreDeColonnes; NumeroDeColonne++)
        {
            transpose[NumeroDeColonne][NumeroDeLigne] = matrix[NumeroDeLigne][NumeroDeColonne];
        }
    }

    printf("Transpose of entered matrix :\n");

    for (NumeroDeLigne = 0; NumeroDeLigne < NombreDeColonnes; NumeroDeLigne++)
    {
        for (NumeroDeColonne = 0; NumeroDeColonne < NombreDeLignes; NumeroDeColonne++)
        {
            printf("%d\t", transpose[NumeroDeLigne][NumeroDeColonne]);
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}