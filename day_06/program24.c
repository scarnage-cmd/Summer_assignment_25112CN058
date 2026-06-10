//power without using pow fnc

#include<stdio.h>
int main()
{
    int x;
    printf("Enter base : ");
    scanf("%d",&x);

    int n;
    printf("Enter power : ");
    scanf("%d",&n);

    int power = 1;

    for(int i=1;i<=n;i++)
    {
        power *= x;
    }

    printf("Value of %d raised to %d = %d ",x,n,power);

    return 0;
}