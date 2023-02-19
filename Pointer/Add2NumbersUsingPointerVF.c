#include <stdio.h>

int main()
{
    int Nombre1, Nombre2, Somme;
    int* PointeurSurNombre1;
    int* PointeurSurNombre2;

    printf("Enter two integers to add\n");
    scanf("%d\t%d", &Nombre1, &Nombre2);

    PointeurSurNombre1 = &Nombre1;
    PointeurSurNombre2 = &Nombre2;

    Somme = *PointeurSurNombre1 + *PointeurSurNombre2;

    printf("Sum of entered numbers = %d\n", Somme);
    return 0;
}