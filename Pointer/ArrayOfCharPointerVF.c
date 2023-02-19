#include <stdio.h>

const int MAX = 4;

int main()
{
	
	char* TableauDeSocietes[] = {"Google", "Amazon", "Toshiba", "Sony",};

	for (int IndexDeCeTableau = 0; IndexDeCeTableau < MAX; IndexDeCeTableau++)
	{
		
		printf("Value of TableauDeSocietes[%d] = %s\n", IndexDeCeTableau, TableauDeSocietes[IndexDeCeTableau]);
	}
	return 0;
}