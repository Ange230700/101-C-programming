/* 
Les variables sont des données volatiles. Elles sont là, juste le temps du
programme. 

La  table ASCII pour les caractères.

Faire attention à la mémmoire surtout en systèmes embarqués

Les drapeaux :
    - %d : int 
    - %f : float --> si on veut ajouter n chiffres supplémentaires après la virgule, on fait %.nf
    Pour faire la troncature, on met %.0f
    - %c : char
    - %s : string

register et volatile sont des mots clés du langage C, plus très utile mais intéressant à connaitre

privilégier les noms de variables à rallonge explicite c'est pratique et ça ne pose pas de problème

maVariable : contenu
&maVarirable : adresse où est stockée cette variable

scanf n'est pas une fonction sécurisée

Quand la fonction vient après le main, il faut la déclarer avant. Sinon, on peut tout simplement
rédiger la fonction avant le main. 
*/

//_______________________________________________________________________
// ------------------------ Variables --------------------------------//

//#include <stdio.h>


//float nombrevirgule;

//int main(void)
/* En gros, j'ai la flemme de créer plusieurs fichiers. 
Donc je ferai tous mes programmes sous formes de fonctions
que j'appelerai dans le main en ce qui concerne FormationVideo*/
//{

//    return 0;
//}

/*                  ---FCT---

int PetiteConversionDesTypes(float nombre_virgule)
//Fonction à revoir car BUG
{
    nombre_virgule = nombrevirgule;
    int nombre_entier = (int) nombre_virgule; //Petite conversion de type.
    printf("Voici le nombre initial %.5f et sa troncature %d\n", nombre_virgule, nombre_entier);
    return nombre_entier;
}

                    --------------                                            */


//_______________________________________________________________________________

/*---------------------------Utilisation de SWITCH----------------------------*/
//Pratique à partir de 4 conditions à programmer
//#include<stdio.h>

//int main(void)
//{
//    int age = 375;
//
//    switch(age)
//    {
//        case 0:
//            printf("Tu as 0 an.\n");
//            break;
//        case 15:
//            printf("Age vaut 15.\n");
//            break;
//        default:
//            printf("Tu n'as ni 0 an, ni 15 ans.\n");
//            break;
//    }
//    return 0;
//}

//__________________________________________________________________________________
/*------------------- LES POINTEURS ----------------------------------*/
/* 

[VARIABLES]
    maVariable : valeur de la variable
    &maVariable : adresse de la variable

[POINTEURS]

un pointeur est une variable contenant l'adresse d'une autre variable.

    *monPionteur = NULL ou *monPointeur = &maVariable
    (déclaration et initialisation d'un pointeur)

    monPointeur : adresse de la valeur pointée
    *monPointeur : valeur de la variable pointée
    &monPointeur : adresse du pointeur

Pour afficher une adresse : (..."%p\n", &maVariable)

*/

//#include <stdio.h>

//void inverser_nombres(int *nombreA, int *nombreB)
//{
//    int temporaire = 0;
//    temporaire = *nombreB;
//    *nombreB = *nombreA;
//    *nombreA = temporaire;
//}

/*

void inverser_nombres_2(int *pointeur_nombreA, int *pointeur_nombreB)
{
    int temporaire = 0;
    temporaire = *pointeur_nombreB;
    *pointeur_nombreB = *pointeur_nombreA;
    *pointeur_nombreA = temporaire;
}

*/

//int main(void)
//{
//    int nombreA = 15;
//    int nombreB = 28;

//    int *pointeursurnombreA = &nombreA;
//    int *pointeursurnombreB = &nombreB; 

//    printf("A = %d et B = %d\n", nombreA, nombreB);
//    inverser_nombres(&nombreA, &nombreB); //En utilisant directement les adresses
//    printf("A = %d et B = %d\n", nombreA, nombreB);
//    inverser_nombres(pointeursurnombreA, pointeursurnombreB); //En utilisant les adresses respectives des valeurs pointées
//    printf("A = %d et B = %d\n", nombreA, nombreB);
//    return 0;
//}

/*---------------TABLEAUX -------------------------- */
/*
    tableau : adresse du tableau
    *tableau ou tableau[0]: premier élément du tableau
    *(tableau + X) ou tableau[X] : élément dindice X
    

*/
//#include<stdio.h>

//#define TAILLE_TABLEAU 5

/*
Permet de définir la taille du tableau en une constante
car rentrer la taille du tableau sous forme de variable n'est pas
toujours conseillé.  
*/

//void afficher_tableau(int Tableau[], int taille);
//void afficher_tableau(int *Tableau, int taille);       --> same shit!
//int *creerTableau(void);
//int initialiserEtAfficherMatrice2x2(static int *Matrice);
//int main(void)
//{
//    int tableau[TAILLE_TABLEAU] = {1, 2, 3, 4, 5};

//    afficher_tableau(tableau, TAILLE_TABLEAU);
//    initialiserEtAfficherMatrice2x2(int *Matrice);
//    return 0;
//}

//void afficher_tableau(int Tableau[], int taille)
//void afficher_tableau(int *Tableau, int taille)       --> same shit!
//{
//    int compteur;
//    for(compteur = 0 ; compteur < taille ; compteur++)
//    {
//        printf("[%d]\t", Tableau[compteur]);
//    }
//}

//int *creerTableau(void)
//{
    //int TableauEntiers[5]; -->  warning: function returns address of local variable [-Wreturn-local-addr]
    //Il faut donc mettre la varible en static pour ne pas avoir de soucis.
//    static int TableauEntiers[5];
    //On met en static pour pouvoir retourner un tableau.
//    int compteur;

//    for(compteur = 0; compteur < 5 ; compteur++)
//    {
//        TableauEntiers[compteur] = compteur * 3;
//    }
//    return TableauEntiers;
//}

//#define NombreLignes 2
//#define NombreColonnes 2
//int initialiserEtAfficherMatrice2x2(static int *Matrice)
//{
//    int Matrice[NombreLignes][NombreColonnes] = 
//    {
//        {0, 0},
//        {0, 0}
//    };
//    int compteur1, compteur2;
//    for(compteur1 = 0; compteur1 < NombreLignes; compteur1++)
//    {
//        for(compteur2 = 0; compteur2 < NombreColonnes; compteur2++)
//        {
//            printf("Element indice[%d][%d] = %d\n", compteur1, compteur2, Matrice);
//        }
//    }
//}
/*
    Si on définit et qu'on initialise un tableau. on peut se permettre se changer
    son contenu en faisant une affectation directe.
*/
//__________________________________________________________________________________

/* ---------------------------CHAINES DE CARACTERES -------------------------------*/
#include<stdio.h>
#include<string.h>

int main(void)
{
    char prenom[25] = "Jason";

    char stockage[256];

    printf("\n%s\n", prenom);

    return 0;
}