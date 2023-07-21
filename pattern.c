#include <stdio.h>
int main()
{
    int j,i,k,l;

   for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
          printf("*");
        }
        printf("\n");
    }
    for(k=1;k<=4;k++)
    {
        for(l=1;l<=(4-k);l++)
        {
            printf("*");
        }
        printf("\n");
    }
}


