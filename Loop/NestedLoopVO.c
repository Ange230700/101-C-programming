#include <stdio.h>

int main()
/*
L'intérêt de ce programme est de voir
le fonctionnement des boucles imbriquées.
*/
{
	int compteur1, compteur2;
	printf("Output of nested loop is :\n");
	for (compteur1 = 0; compteur1 < 3; compteur1++)
	{
		printf("\ncompteur1 = %d\n", compteur1);
		for (compteur2 = 0; compteur2 < 3; compteur2++)
		{
			printf("\ncompteur1 = %d\ncompteur2 = %d\n", compteur1, compteur2);
			printf("\ncompteur1 + compteur2 = %d\n", compteur1 + compteur2);
		}
	}
	return 0;
}