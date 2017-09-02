#include <stdio.h>
#include <stdlib.h>

int main()
{
    int leg[]={38,24,18,83,57};
    int nota1[]={10,7,2,2,5};
    int nota2[]={4,10,2,5,4};
    float promedios[5]={};
    printf("leg\tnota1\tnota2\tpromedio\n ",leg,nota1,nota2,promedios);


    for(int i=0; i<5;i++)
    {
        promedios[i]=(nota1[i]+nota2[i])/2.0;
        printf("%2d\t%2d\t%d\t %.2f \n", leg[i],nota1[i],nota2[i],promedios[i] );
    }

    return 0;
}
