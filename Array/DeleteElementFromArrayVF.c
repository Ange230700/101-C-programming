#include <stdio.h>

int main()
{
	int array[100], PositionElementASupprimer, IndexElementsDuTableau, NombreElementsDuTableau;

	printf("\n\nEnter number of elements in array (inferieur ou egale a 100) :\t");
	scanf("%d", &NombreElementsDuTableau);

	printf("\nEnter %d elements\n", NombreElementsDuTableau);

	for (IndexElementsDuTableau = 0; IndexElementsDuTableau < NombreElementsDuTableau; IndexElementsDuTableau++)
	{
		printf("Element %d :\t", IndexElementsDuTableau + 1);
		scanf("%d", &array[IndexElementsDuTableau]);
	}
	printf("\nEnter the location where you wish to delete element\n\tPosition de l'element a supprimer :\t");
	scanf("%d", &PositionElementASupprimer);

	if (PositionElementASupprimer >= NombreElementsDuTableau + 1)
	{
		printf("Deletion not possible.\n");
	}
	else
	{
		for (IndexElementsDuTableau = PositionElementASupprimer - 1; IndexElementsDuTableau < NombreElementsDuTableau - 1; 
			IndexElementsDuTableau++)
		{
			array[IndexElementsDuTableau] = array[IndexElementsDuTableau + 1];
		}
		printf("Resultant array is\n\t");

		for (IndexElementsDuTableau = 0; IndexElementsDuTableau < NombreElementsDuTableau - 1; IndexElementsDuTableau++)
		{
			printf("%d\t", array[IndexElementsDuTableau]);
		}
		printf("\n\n");
	}
	return 0;
}