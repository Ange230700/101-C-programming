#include <stdio.h>
#include <string.h>
/*
Inclusion de la bibliothèque pour la manipulation de chaînes de caractères.
*/
#include <stdlib.h>

// A function that prints given number in words

void convert_to_words(char *NombreAconvertirEnChiffre)
/*
ATTENTION ! Utilisation d'un pointeur
Cette fonction convertit un nombre écrit avec des chiffres
en un nombre en toute lettre
*/
{
	//Get number of digit in given number
	/*
	Ces chiffres sont donnés sous forme de string et non pas de integer.
	*/
	int len = strlen(NombreAconvertirEnChiffre);
	printf("\nLe nombre de chiffres du nombre a convertir en lettre est : %i\n", len);
	// Base cases
	if (len == 0)
	{
		fprintf(stderr, "\nempty string\n");
		/*
		STDERR : expression de type FILE* associée au flux de sortie d'erreur
		Donc on retourne une erreur si pas de chiffre.
		*/
		return;
	}
	if (len > 4)
	{
		fprintf(stderr, "\nLength more than 4 is not supported\n");
		/*
		STDERR : expression de type FILE* associée au flux de sortie d'erreur
		On retrouve une erreur si plus de 4 chiffres
		*/
		return;
	}

	/* 
	The first string is not used, it is to make array indexing 
	simple 
	*/

	char *single_digits[] = 
	/*
	Quand on s'aperçoit qu'un seul chiffre a été saisi.
	Il s'agit aussi du chiffre des unités.
	*/
	{
	"zero","one","two","three","four",
	"five","six","seven","eight","nine"
	};

	/* 
	The first string is not used, it is to make array indexing 
	simple 
	*/

	char *two_digits[] = 
	/*
	Quand on s'aperçoit que deux chiffres ont été saisis.
	Il s'agit aussi des 2 derniers chiffres du nombre.
	*/	
	{
	"","ten","eleven","twelve","thirteen","fourteen",
	"fifteen","sixteen","seven","eighteen","nineteen"
	};

	/* 
	The first two string are not used, they're to make array
	 indexing simple 
	 */

	char *tens_multiple[] = 
	/*
	Quand on s'aperçoit toujours que 2 chiffres ont été saisis.
	Il s'agit aussi du chiffre des dizaines.
	*/
	{
		"","","twenty","thirty","forty",
		"fifty","sixty","seventy","eighty","ninety"
	};
	
	char *tens_power[] = {"hundred", "thousand"};
	/*
	Quand on s'aperçoit toujours que 3 ou 4 chiffres ont été saisis.
	Il s'agit du chiffre des centaines ou des milliers.
	*/

	//Used for debugging purposes only
	printf("\nLe nombre a convertir en toute lettre : %s\n", NombreAconvertirEnChiffre);

	// For single digit number
	if (len == 1)
	{
		printf("\nEn lettre, cela donne : %s\n", single_digits[*NombreAconvertirEnChiffre - '0']);
		printf("\nJ'affiche le truc suivant a des fins de debbugage\n");
		printf("\nC'est quoi cela? --> %s\n", *NombreAconvertirEnChiffre - '0');
		return;
	}

	// Iterate while NombreAconvertirEnChiffre is not '\0'
	printf("\nJuste de rentrer dans la boucle TANT QUE : %s\n", *NombreAconvertirEnChiffre);
	while (*NombreAconvertirEnChiffre != '\0')
	{
		//Code path for first 2 digits
		if (len >= 3)
		{
			if (*NombreAconvertirEnChiffre - '0' != 0)
			{
				printf("\nLe nombre a convertir, a ce stade, ressemble a : %s\n", *NombreAconvertirEnChiffre);
				printf("\nApparemment, ça enleve les zeros non lus à l'oral : %s\n", *NombreAconvertirEnChiffre - '0');
				printf("\nLes unites : %s\n", single_digits[*NombreAconvertirEnChiffre - '0']);
				// here len can be 3 or 4
				printf("\nLes centaines ou les milliers : %s\n", tens_power[len-3]);
			}
			--len;
			/*
			On fait la decrementation dans le cas des milliers.
			Je veux dire, on revient dans la boucle dans ce cas-ci.
			*/
		}

		// Code path for last 2 digits
		else
		{
			/* Need to explicitly handle 10-19. Sum of 
			the two digits is used as index of "two_digits"
			array of strings */
			if (*NombreAconvertirEnChiffre == '1')
			{
				int sum = *NombreAconvertirEnChiffre - '0' + *(NombreAconvertirEnChiffre + 1) - '0';
				printf("\nLe nombre a convertir, a ce stade, ressemble a : %s\n", sum);
				printf("\nApparemment, cela enleve les zeros non lus a l'oral : %s\n", *NombreAconvertirEnChiffre - '0');
				printf("\nLes 2 derniers chiffres sont : %s\n", two_digits[sum]);
				return;
			}

			// Need to explicitely handle 20
			else if (*NombreAconvertirEnChiffre == '2' && *(NombreAconvertirEnChiffre + 1) == '0')
			{
				printf("twenty\n");
				return;
			}

			// Rest of the two digit numbers i.e., 21 to 99
			else
			{
				int LesDizaines = *NombreAconvertirEnChiffre - '0';
				printf("Cela m'a l'air d'etre le chiffres des dizaines --> %s", LesDizaines);
				printf("Est-ce que c'est vrai --> %s ", LesDizaines ? tens_multiple[LesDizaines] : "");
				++NombreAconvertirEnChiffre;
				printf("C'est quel incrementation ca : %i", NombreAconvertirEnChiffre);
				if (*NombreAconvertirEnChiffre != '0')
				{
					printf("Enfin le chiffre des unites, si c'est pas 0 : %s ", single_digits[*NombreAconvertirEnChiffre - '0']);
				}
			}
		}
		++NombreAconvertirEnChiffre;
		printf("\nSerait-ce l'indice dans la chaine de caractere : %i\n", NombreAconvertirEnChiffre);
	}
}

int main()
{
	char LeNombreAconvertir [100];
	printf("Enter number to convert to words : ");
	scanf("%s", LeNombreAconvertir);
	convert_to_words(LeNombreAconvertir);

	return 0;
}