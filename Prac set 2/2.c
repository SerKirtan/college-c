#include<stdio.h>

int main()
{
 int marks;
 printf("\n Enter Marks from 0-70 :");
 scanf("%d",&marks);
 if(marks<23)
 {
  printf("\n Sorry ..! You are Fail");
 }
 else
 {
  printf("\nCongratulation ...! You are Pass");
 }
 return 0;
}
