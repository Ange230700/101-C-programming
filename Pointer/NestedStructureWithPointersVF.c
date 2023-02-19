#include <stdio.h>
#include <string.h>

struct InformationCampusDeEtudiant 
{
    int IDcampus;
    char NomDuCampus[50];
};

struct InformationEtudiant 
{
    int IDetudiant;
    char NomEtudiant[20];
    float Percentage;

    // structure within structure
    struct InformationCampusDeEtudiant InformationSurSonCampus;

} InfoEtudiant, *PointeurSurInfoEtudiant;

int main()
{
    struct InformationEtudiant InfoEtudiant = {1, "Sam", 90.5, 71145, "Anna University"};
    PointeurSurInfoEtudiant = &InfoEtudiant;

    printf("Id is: %d \n", PointeurSurInfoEtudiant->IDetudiant);
    printf("Name is: %s \n", PointeurSurInfoEtudiant->NomEtudiant);
    printf("Percentage is: %f \n\n", PointeurSurInfoEtudiant->Percentage);

    printf("College Id is: %d \n", PointeurSurInfoEtudiant->InformationSurSonCampus.IDcampus);
    printf("College Name is: %s \n", PointeurSurInfoEtudiant->InformationSurSonCampus.NomDuCampus);

    return 0;
}