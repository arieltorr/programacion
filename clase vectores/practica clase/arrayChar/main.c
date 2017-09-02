#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*declarar un array de char de tamaño 5 cargarlo y mostrarlo */

int main()
{
    char vector[5];
    for(int i=0; i<5; i++)
    {
       printf("\ningrese una vocal: ");
       vector[i]=getche();
       while(vector[i]!='a'&& vector[i]!='e'&& vector[i]!='i'&& vector[i]!='o'&& vector[i]!='u')
        {
       printf("\nERROR, reingrese una vocal: ");
       vector[i]=getche();
        }
    }

    printf("\n\n");

    for(int i=0; i<5; i++)
    {
    printf("%c", vector[i]);
    }


    return 0;
}
