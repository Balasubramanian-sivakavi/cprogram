#include <stdio.h>
int main()
{
    int i,j,n=5,s;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
            for(s=0;s<i*2+1;s++)
            {
                printf("*");
            }
             printf("\n");
    }

}
