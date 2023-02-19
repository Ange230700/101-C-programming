#include <stdio.h>
/*
On inclut la bibliothèque standard des entrées-sorties
*/

int main(void)
/*
Ici, la fonction "main" exécute les instructions dans la boucle au moins une fois.
Elle continue tant que la condition est respectée.
*/
{
	int compteur = 10;
	do
	{
		printf("\nHello !\nCompteur = %d\n", compteur);
		compteur -= 1;
		/*
		Cette écriture est stylé et veut dire :
		compteur = compteur - 1;
		*/
	} while (compteur > 0);
	return 0;
}