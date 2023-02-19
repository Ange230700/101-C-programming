#include<stdio.h>

int main()
/*
Ce programme permet de calculer le déterminant d'une matrice carrée de dimension 3.
On peut faire un upgrade qui permettra de faire le calcul pour une matrice carrée de dimension n.
*/
{

    int Matrice3X3[3][3], NumeroDeLigne, NumeroDeColonne;

    long determinant;

    printf("\n\nEnter the 9 elements of matrix :\n");
    for (NumeroDeLigne = 0; NumeroDeLigne < 3; NumeroDeLigne++)
    {        
        for (NumeroDeColonne = 0; NumeroDeColonne < 3; NumeroDeColonne++)
        {
            printf("\tLigne %d et Colonne %d :\t", NumeroDeLigne, NumeroDeColonne);
            scanf("%d", &Matrice3X3[NumeroDeLigne][NumeroDeColonne]);
            printf("\n");
        }
        printf("\n");
    }
    printf("\nThe matrix is :\n");
    for (NumeroDeLigne = 0; NumeroDeLigne < 3; NumeroDeLigne++)
    {
        printf("\n");
        for (NumeroDeColonne = 0; NumeroDeColonne < 3; NumeroDeColonne++)
        {
            printf("%d\t", Matrice3X3[NumeroDeLigne][NumeroDeColonne]);
        }
    }

    determinant = Matrice3X3[0][0] * ((Matrice3X3[1][1] * Matrice3X3[2][2]) - (Matrice3X3[2][1] * Matrice3X3[1][2]))
                  - Matrice3X3[0][1] * (Matrice3X3[1][0] * Matrice3X3[2][2] - Matrice3X3[2][0] * Matrice3X3[1][2])
                  + Matrice3X3[0][2] * (Matrice3X3[1][0] * Matrice3X3[2][1] - Matrice3X3[2][0] * Matrice3X3[1][1]);

    printf("\n\nDeterminant of 3X3 matrix : %ld\n\n", determinant);

    return 0;
}