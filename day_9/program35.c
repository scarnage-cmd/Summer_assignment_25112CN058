/*

A 
BB 
CCC 
DDDD 
EEEEE 

*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d",&n);

    int i,j;
    for(i = 1;i<=n;i++)
    {
        for(j= 1;j<=i;j++)
        {
            printf("%c",64+i);
        }
        printf("\n");
    }
    return 0;
}