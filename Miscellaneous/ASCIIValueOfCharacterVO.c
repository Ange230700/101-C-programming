#include<stdio.h>

int main()
{
	/*
	Ce programme présente la table ASCII de chaque caractère.
	*/
	char caractere;
	printf("\nEnter a character : ");
	scanf("%c", &caractere);
	printf("ASCII value of %c = %d", caractere, caractere);
	return 0;
}