#include<stdio.h>
/*
On inclut la bibliothèque standard des entrées-sorties
*/

int main()
{
    int i;

    /* 
        The loop goes while i < 10, 
        and i increases by one every loop 
    */

    for (i = 0; i < 10; i++)
    {
        /*
        Keep in mind that the loop condition checks
        the conditional statement before it loops again.
        consequently, when i equals 10 the loop breaks.
        i is updated before the condition is checked. 
        */

        printf("Au %d ième passage dans la boucle, on a : %d\n", i + 1, i);
    }
    return 0;
}