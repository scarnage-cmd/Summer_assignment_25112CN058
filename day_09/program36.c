/*

***** 
*   * 
*   * 
*   * 
*****

*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d",&n);

    int i,j;

    //for first line 
    for(i=1;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");

    //for centre part 
    for(i = 1;i<=n-2;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1 || j==n)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

    //for last line 
    for(i=1;i<=n;i++)
    {
        printf("*");
    }

    return 0;
}