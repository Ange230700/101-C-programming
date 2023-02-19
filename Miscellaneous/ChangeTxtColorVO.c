#include <windows.h>
/*
Inclusion du header spécifique à Windows pour les langages de programmation C et C ++ 
qui contient des déclarations pour toutes les fonctions de l'API("Application Programming Interface") Windows
*/
#include <stdio.h>

void setColor(int ForgC);

int main()
/*
Il y a des erreurs qui je ne peux pas debugger pour l'instant.
*/
{
	setColor(26);
	printf("Color Change : Programming Hub");
	setColor(36);
	printf("\n\nColor Change : Programming Hub");
	setColor(46);
	printf("\n\nColor Change : Programming Hub");
	getch();
	return 0;
}

void setColor(int ForgC)
/*
Tout ce que je comprends pour le moment,
c'est que cette fonction permet de colorer un texte.
*/
{
	WORD wColor;

	//We will need this handle to get the current background attribute

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;

	//We use csbi for the wAttributes word.

	if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
	{
		//Mask out all of but the background attribute, and add in the forgournd
		wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
		SetConsoleTextAttributes(hStdOut, wColor);
	}
}