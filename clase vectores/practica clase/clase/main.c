#include <stdio.h>
#include <stdlib.h>
/*pedir al usuario que ingrese un numero y despues decir si esta o no esta */
int main()
{
    int vector[]= {1,2,54,6,8,4,3,9,10,15};
    int numero;
    int flag=0;
    printf("ingrese el numero a buscar : ");
    scanf("%d", &numero);

    for(int i=0; i<10; i++)
    {
        if(vector[i]== numero)
        {
            printf("el numero se encuentra en el vector " );
            flag=1;
            break;

        }


    }

    if(flag==0)
    {
        printf("el numero no se encuentra en el vector");

    }

    return 0;
}
