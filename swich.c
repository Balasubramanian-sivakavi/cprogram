#include<stdio.h>
int main()
{
    int a;
    scanf("%d",
          &a);
    switch(a)
    {
    case 1:
        printf("A");

    case 2:
        printf("B");
        break;
    case 3:
        printf("C");
        break;
    case 4:
        printf("D");
        break;
    case 5:
        printf("E");
        break;
    default:
        printf("invalid");

    }
}


#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    switch(a)
    {
    case 1 ... 50:
        printf("A");
     break;
    case 51 ... 100:
        printf("B");
        break;

    default:
        printf("invalid");

    }
}
#include<stdio.h>
int main ()
{
int a=1,b=1,c,n,i;

scanf("%d",&n);
printf("%d%d",a,b);
while (i<=n)
{
    c=a+b;
    printf("%d",c);
    a=b;
    b=c;
    i++;


}
}
