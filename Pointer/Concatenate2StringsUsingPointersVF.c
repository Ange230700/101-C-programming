#include <stdio.h>

void concatenate_string(char*, char*);

int main()
{
    char ChaineDecaractereOriginelle[100], ChaineDeCaractereAjout[100];

    printf("Enter source string\n");
    gets(ChaineDecaractereOriginelle);

    printf("Enter string to concatenate\n");
    gets(ChaineDeCaractereAjout);

    concatenate_string(ChaineDecaractereOriginelle, ChaineDeCaractereAjout);

    printf("String after concatenation is \"%s\"\n", ChaineDecaractereOriginelle);

    return 0;
}

void concatenate_string(char* ChaineDecaractereOriginelle, char* ChaineDeCaractereAjout)
{
    while (*ChaineDecaractereOriginelle)
    {
        ChaineDecaractereOriginelle++;
    }

    while (*ChaineDeCaractereAjout)
    {
        *ChaineDecaractereOriginelle = *ChaineDeCaractereAjout;
        ChaineDeCaractereAjout++;
        ChaineDecaractereOriginelle++;
    }
    *ChaineDecaractereOriginelle = '\0';
}