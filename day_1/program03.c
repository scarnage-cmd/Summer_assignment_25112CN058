#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number you want factorial of : ");
    scanf("%d",&n);

    int fact = 1;

    if(n==0 || n==1)
    {
        printf("The factorial is : 1");
        return 0;
    }

    for(int i =1;i<=n;i++)
    {
        fact *= i;
    }

    printf("The factorial is : %d",fact);

    return 0;
}