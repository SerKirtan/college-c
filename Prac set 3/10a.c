/*Pattern
1
12
123
1234
12345*/
#include<stdio.h>
int main(){
    int r,c,rows;
    printf("Enter rows\n");
    scanf("%d",&rows);
    for(r=1;r<=rows;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%d",c);
        }
        printf("\n");
    }
    return 0;
}
