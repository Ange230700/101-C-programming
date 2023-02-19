#include <stdlib.h>
/*
Inclusion d'une bibliothèque standard.
*/
#include <time.h>
/*
Inclusion de la bibliothèque en rapport avec le temps.
*/
#include <stdio.h>
/*
On inclut la bibliothèque standard des entrées-sorties
*/

int main()
{
	int a, b;

	srand(time(NULL));
	/*
	Cette fonction utilise l'heure actuelle comme référence pour le générateur aléatoire
	*/
	while (1)
	/*
	Tel que la boucle est créée ici, c'est pour
	éviter la valeur de retour et faire fonctionner le programme indéfiniment
	A l'image de Arduino, c'est comme la fonction loop.
	*/
	{
		//not exactly uniformly distributed, but doesn't matter
		a = rand() % 20;
		/*
		Cette fonction retourne une valeur entière pseudo-aléatoire
		comprise entre 0 et une valeur max déjà fixé dans le langage.
		*/
		printf("\nVoici un nombre aléatoire entre 0 et %d inclus : %d\n", RAND_MAX, a);
		if (a==10)
		{
			break;
			/*
			On arrête le programme si on tombe sur 10.
			*/
		}

		//not exactly uniformly distributed, but doesn't matter
		b = rand() % 20;
		printf("\nVoici un autre nombre aléatoire entre 0 et %d inclus : %d\n", RAND_MAX, b);
	}
	return 0;
} 