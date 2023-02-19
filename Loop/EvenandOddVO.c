#include <stdio.h>
/*
On inclut la bibliothèque standard des entrées-sorties
*/

/*
Déclaration des variables globales
*/
int Nombre1, Nombre2;
/*
Déclaration des fontions autres que "main".
*/
int Test(int nombre1, int nombre2);
int SaisieDuneValeur(int NumeroDuNombre);
void PaireOuImpaire(int NombreDentierAverifier);
/*
Fonction "main".
*/
int main()
{
	Nombre1 = SaisieDuneValeur(1);
	Nombre2 = SaisieDuneValeur(2);
	int test = Test(Nombre1, Nombre2);
	printf("\ntest = %d", test);
	PaireOuImpaire(Nombre1);
	PaireOuImpaire(Nombre2);
	return 0;
}

int Test(int nombre1, int nombre2)
/*
J'ai créé cette fonction pour comprendre l'utilité
de l'opérateur '&'.
Attention : Il en s'agit pas de '&&' 
qui est l'opérateur logique ET
*/
{
	int operation = nombre1 & nombre2;
	printf("\nopération = %d\n", operation);
	return operation;
}

void PaireOuImpaire(int NombreDentierAverifier)
{	
	for (int compteur = 0; compteur <= NombreDentierAverifier; compteur++)
	{
		if (compteur & 1)
		/*
		Je soupçonne l'opération "&" de vérifier 
		si le reste de la division euclidienne 
		de compteur par 2 est 1. 
		Mais est-ce vraiment le cas ?
		*/
		{
			printf("%d est impaire\n", compteur);
		}
		else
		{
			printf("%d est paire\n", compteur);
		}
	}	
}

int SaisieDuneValeur(int NumeroDuNombre)
/*
Je veux une fonction qui me permet de saisir une valeur.
*/
{
	int nombre;
	printf("\nEntrez nombre%d.\nnombre%d = ", NumeroDuNombre, NumeroDuNombre);
	nombre = scanf("%d\n", &nombre);	
	return nombre;
}
/*
J'ai un PROBLEME avec ce programme.
Je ne comprends pas pourquoi ça met du temps avant de s'exécuter.
*/