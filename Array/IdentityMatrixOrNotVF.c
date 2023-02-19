#include <stdio.h>

int main()
/*
Ce programme permet d'identifier une matrice identité.
*/
{
    int Matrice[10][10];
    int NumeroDeLigne, NumeroDeColonne, row, column, flag = 1;

    printf("Enter the dimensions of the matrix A : ");
    printf("\n\n\tEntrer le nombre de lignes :\t");
    scanf("%d", &row);
    printf("\n\tEntrer le nombre de colonnes :\t");
    scanf("%d", &column);
    printf("Enter the elements of matrix A \n");

    for (NumeroDeLigne = 0; NumeroDeLigne < row; NumeroDeLigne++)
    {
        for (NumeroDeColonne = 0; NumeroDeColonne < column; NumeroDeColonne++)
        {
            printf("\n\tLigne %d et Colonne %d :\t", NumeroDeLigne, NumeroDeColonne);
            scanf("%d", &Matrice[NumeroDeLigne][NumeroDeColonne]);
        }
        printf("\n");
    }
    printf("MATRIX A is :\n");
    for (NumeroDeLigne = 0; NumeroDeLigne < row; NumeroDeLigne++)
    {
        for (NumeroDeColonne = 0; NumeroDeColonne < column; NumeroDeColonne++)
        {
            printf("%3d", Matrice[NumeroDeLigne][NumeroDeColonne]);
            /*
            Je ne sais pas à quoi sert le "%3d"
            Peut-être pour le display de la matrice.
            Ou ça multiplie le nombre par 3.
            */
        }
        printf("\n");
    }

    //  Check for unit (or identity) matrix
    for (NumeroDeLigne = 0; NumeroDeLigne < row; NumeroDeLigne++)
    {
        for (NumeroDeColonne = 0; NumeroDeColonne < column; NumeroDeColonne++)
        {
            if (Matrice[NumeroDeLigne][NumeroDeColonne] != 1 && Matrice[NumeroDeColonne][NumeroDeLigne] != 0)
            {
                flag = 0;
                break;
            }
        }
    }
    /*
    Je ne comprends pas comment le programme arrive à vérifier le bon emplacement des 0 et des 1.
    */
    if (flag == 1)
    {
        printf("It is identity matrix \n");
    }
    else
    {
        printf("It is not a identity matrix \n");
    }
}