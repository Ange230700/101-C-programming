#include <stdio.h>

int main()
{
	char caractere;

	printf("Input a character : ");
	scanf("%c", &caractere);
	/*
	Une utilisation intéressante de SWITCH...CASE.
	*/
	switch (caractere)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			printf("%c is a vowel.\n", caractere);
			break;
		default:
			printf("%is not a vowel.\n", caractere);
			/*
			Le '%i' permet d'afficher une variable de type int. 
			*/
	}

	return 0;
}