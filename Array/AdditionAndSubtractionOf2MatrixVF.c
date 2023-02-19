#include <stdio.h>


int main()
/*
Ce programme permet de faire l'addition ou
la soustraction de 2 matrices nXn où n est la dimension.
*/
{
    int NombreDeLignes, NombreDeColonnes, NumeroDeLigne, NumeroDeColonne;
    int Matrice1[5][5], Matrice2[5][5], sum[5][5];
    /*
    On pourrait optimiser le code en considérant une dimension (constante).
    Ce sera pour la prochaine mise à jour du code.
    */
    
    printf("Enter the number of rows and columns of these matrix (de dimension 5 maximum).\n");
    printf("\tLe nombre de lignes :\t");
    scanf("%d", &NombreDeLignes);
    printf("\n\tLe nombre de colonnes (veuillez a rentrer le meme nombre que celui de lignes) :\t");
    scanf("%d", &NombreDeColonnes);

    printf("Enter the elements of first matrix :\n");
    /*
    On peut faire aussi un affichage de chaque matrice avant toute opération.
    Je ferai cela lors de la mise à jour.
    */

    for (NumeroDeLigne = 0; NumeroDeLigne < NombreDeLignes; NumeroDeLigne++)
    {
        printf("\t");
        for (NumeroDeColonne = 0; NumeroDeColonne < NombreDeColonnes; NumeroDeColonne++)
        {
            printf("Ligne %d et Colonne %d :\t", NumeroDeLigne + 1, NumeroDeColonne + 1);
            scanf("%d", &Matrice1[NumeroDeLigne][NumeroDeColonne]);
            printf("\t");
            /*
            Ici, j'ai essayé de présenter la forme de la matrice lors de la saisie.
            Mais ça n'a pas fonctionné comme prévue. Et je ne crois pas que ce soit possible.
            */
        }
        printf("\n");
    }

    printf("Enter the elements of second matrix :\n");

    for (NumeroDeLigne = 0; NumeroDeLigne < NombreDeLignes; NumeroDeLigne++)
    {
        printf("\t");
        for (NumeroDeColonne = 0; NumeroDeColonne < NombreDeColonnes; NumeroDeColonne++)
        {
            printf("Ligne %d et Colonne %d :\t", NumeroDeLigne + 1, NumeroDeColonne + 1);
            scanf("%d", &Matrice2[NumeroDeLigne][NumeroDeColonne]);
            printf("\t");
        }
        printf("\n");
    }


    for (NumeroDeLigne = 0; NumeroDeLigne < NombreDeLignes; NumeroDeLigne++)
    {
        for (NumeroDeColonne = 0; NumeroDeColonne < NombreDeColonnes; NumeroDeColonne++)
        {
            sum[NumeroDeLigne][NumeroDeColonne] = Matrice1[NumeroDeLigne][NumeroDeColonne] + Matrice2[NumeroDeLigne][NumeroDeColonne];
            /*
            On fait la somme entre éléments correspondants de chaque matrice.
            */
        }
    }
    
    printf("Sum of entered matrices:\n");
    /*
    On fait l'affiche de la somme obtenue.
    */

    for (NumeroDeLigne = 0; NumeroDeLigne < NombreDeLignes; NumeroDeLigne++)
    {
        printf("\t");
        for (NumeroDeColonne = 0; NumeroDeColonne < NombreDeColonnes; NumeroDeColonne++)
        {
            printf("%d\t", sum[NumeroDeLigne][NumeroDeColonne]);
        }
        printf("\n");
    }
    printf("\n");


    for (NumeroDeLigne = 0; NumeroDeLigne < NombreDeLignes; NumeroDeLigne++)
    {
        for (NumeroDeColonne = 0; NumeroDeColonne < NombreDeColonnes; NumeroDeColonne++)
        {
            sum[NumeroDeLigne][NumeroDeColonne] = Matrice1[NumeroDeLigne][NumeroDeColonne] - Matrice2[NumeroDeLigne][NumeroDeColonne];
            /*
            On fait la soustraction entre éléments correspondants de chaque matrice.
            */
        }
    }
    
    printf("Difference between entered matrices:\n");
    /*
    On fait l'affiche du résultat obtenu.
    */

    for (NumeroDeLigne = 0; NumeroDeLigne < NombreDeLignes; NumeroDeLigne++)
    {
        printf("\t");
        for (NumeroDeColonne = 0; NumeroDeColonne < NombreDeColonnes; NumeroDeColonne++)
        {
            printf("%d\t", sum[NumeroDeLigne][NumeroDeColonne]);
        }
        printf("\n");
    }
    return 0;
}