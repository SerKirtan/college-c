/*Read marks and display equivalent grade
MARKS   ->  GRADE
100-80  ->  Distinction
60-79   ->  First class
40-59   ->  Second class
0-39    ->  Failed
*/

#include<stdio.h>
int main()
{
 int marks;
 repeat:
 printf("\n Enter Marks between 0-100 :");
 scanf("%d",&marks);
 if(marks>100 || marks <0)
 {
  printf("\n Your Input is out of Range");
  goto repeat;
 }
 else if(marks>=80)
 {
  printf("\n You got Distinction");
 }
 else if(marks>=60)
 {
  printf("\n You got First Class");
 }
 else if(marks>=40)
 {
  printf("\n You got Second Class");
 }
 else
 {
  printf("\n You Failed");
 }
 return 0;
}
