#include <stdio.h>
#include <math.h>

int main()
{
    static int array[10][10];
    int NumeroDeLigne, NumeroDeColonne, NombreDeLignes, NombreDeColonnes, Trace = 0, NormalAuCarre = 0, ComposanteAuCarre = 0, normal;

    printf("\n\nEnter the order of the matrix\n");
    printf("\n\tEntrer le nombre de lignes :\t");
    scanf("%d", &NombreDeLignes);
    printf("\n\tEntrer le nombre de colonnes :\t");
    scanf("%d", &NombreDeColonnes);
    printf("\n\nEnter the n coefficients of the matrix \n");
    for (NumeroDeLigne = 0; NumeroDeLigne < NombreDeLignes; ++NumeroDeLigne)
    {
        for (NumeroDeColonne = 0; NumeroDeColonne < NombreDeColonnes; ++NumeroDeColonne)
        {
            printf("\n\tLigne %d et Colonne %d :\t", NumeroDeLigne + 1, NumeroDeColonne + 1);
            scanf("%d", &array[NumeroDeLigne][NumeroDeColonne]);
            ComposanteAuCarre = array[NumeroDeLigne][NumeroDeColonne] * array[NumeroDeLigne][NumeroDeColonne];
            NormalAuCarre = NormalAuCarre + ComposanteAuCarre;
        }
        printf("\n");
    }
    normal = sqrt((double) NormalAuCarre);
    printf("\nThe normal of the given matrix is = %d\n", normal);

    for (NumeroDeLigne = 0; NumeroDeLigne < NombreDeLignes; ++NumeroDeLigne)
    {
        Trace = Trace + array[NumeroDeLigne][NumeroDeLigne];
    }
    printf("\nTrace of the matrix is = %d\n\n", Trace);
    return 0;
}