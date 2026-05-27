#include<stdio.h>
int main()
{
    int sum = 0 ;
    int n ;
    printf("Enter N : ");
    scanf("%d",&n);

    for(int i =0;i<=n;i++)
    {
        sum += i;
    }

    printf("The sum uptill n terms : %d",sum);

    return 0;
}