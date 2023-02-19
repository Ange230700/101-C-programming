#include <stdio.h>

int main()
/*
Un exemple simple de la boucle TANT QUE dans le langage C
*/
{
	//Don't forget to declare variables 
	int compteur = 0;
	while (compteur < 10)
	{
		printf("compteur = %d\n", compteur);
		//Update i so the condition can be met eventually
		compteur++;
	}
	return 0;
}