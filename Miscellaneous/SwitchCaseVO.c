#include<stdio.h>

int main()
{
	//local variable definition
	printf("Enter a grade (A, B, C, D or F) : ");
	char grade = scanf("%c", &grade);

	switch (grade) // PROGRAMME A REVOIR SUR PROGRAMMING HUB
	{
		if (grade == 'A')
		{
			printf("Execellent!\n");
		}
		else if (grade == 'B')
		{
			printf("Very good!\n");
		}
		else if (grade == 'C')
		{
			printf("Well done\n");
		}
		else if (grade == 'D')
		{
			printf("You passed\n");
		}
		else
		{
			printf("Better try again\n");
		}

	}
	
	printf("Your grade is %c\n", grade);

	return 0;
}