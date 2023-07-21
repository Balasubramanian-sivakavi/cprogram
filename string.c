#include<stdio.h>
#include<string.h>
int main()
{
    char s1[5]="hi",s2[5]="hi";
    int flag =0;
    for(int i = 0 ; s1[i]!='\0'|| s2[i]!='\0'; i++)
    {
        if(s1[i] != s2[i])
        {
            flag =1;
        }
    }
    if(flag == 0)
    {
        printf("Same");
    }
    else
    {
        printf("Not same");
    }

}
