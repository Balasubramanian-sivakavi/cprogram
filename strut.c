#include<stdio.h>
int studentdetails();
int agefourteen();
int rollno();
struct std
{
 int roll;
 char name[50];
 int age;
 char address[50];
  };
 void main()
 {

    struct std s[2];
    studentdetails(s);
    agefourteen(s);
    rollno(s);

 }
 int studentdetails(struct std s[])
 {
     for(int i=0;i<2;i++)
     {
         scanf("%s",s[i].name);
         scanf("%d",&s[i].roll);
         scanf("%s",s[i].address);
     }

     for(int i=0;i<2;i++)
     {
         printf("%s\n",s[i].name);
         printf("%d\n",s[i].roll);
         printf("%s\n",s[i].address);

     }
 }
int agefourteen(struct std s[])
{
    int count=0;
    printf("the students having age of 14\n");
    for(int i=0;i<2;i++)
     {
         if(s[i].roll==14)
         {


         printf("%s\n",s[i].name);
         }
         else
         {
             count++;


         }


     }
     if(count!=0)
         {
             printf("no student have the age of 14\n");
         }

}
int rollno(struct std s[])
{

printf("the even roll no\n");
    for(int i=0;i<2;i++)
     {
         if(s[i].roll%2==0)
         {
             printf("%s\n",s[i].name);
         }
         else
         {

         }
     }
}

