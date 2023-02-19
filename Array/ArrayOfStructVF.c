#include <stdio.h>

struct StructuresDeDonees 
{
    int Entier;
    char Caractere;
};

int main()
/*
Ce programme présente comment déclarer et initialser une structure de données.
*/
{

    // Declare an array of 3 structure objects
    struct StructuresDeDonees TableauDeStructuresDeDonnees[3];

    // first structure object
    struct StructuresDeDonees Element0;
    Element0.Entier = 0;
    Element0.Caractere = 'a';

    //Second structure object
    struct StructuresDeDonees Element1;
    Element1.Entier = 1;
    Element1.Caractere = 'b';

    // Third structure object
    struct StructuresDeDonees Element2;
    Element2.Entier = 2;
    Element2.Caractere = 'c';

    // Initializing first element of array with first structure object
    TableauDeStructuresDeDonnees[0] = Element0;
    // Initializing second element of array with second structure object
    TableauDeStructuresDeDonnees[1] = Element1;
    // Initializing third element of array with third structure object
    TableauDeStructuresDeDonnees[2] = Element2;

    printf("\n First Element of array has values of : Entier = [%d] and Caractere = [%c]\n",
           TableauDeStructuresDeDonnees[0].Entier, TableauDeStructuresDeDonnees[0].Caractere);
    printf("\n Second Element of array has values of Entier = [%d] and Caractere = [%c]\n",
           TableauDeStructuresDeDonnees[1].Entier, TableauDeStructuresDeDonnees[1].Caractere);
    printf("\n Third Element of array has values of Entier = [%d] and Caractere = [%c]\n\n",
           TableauDeStructuresDeDonnees[2].Entier, TableauDeStructuresDeDonnees[2].Caractere);

    return 0;
}