//perfect number 

#include<stdio.h>
int main()
{
    int n;
    printf("Enter N : ");
    scanf("%d",&n);
    
    int sum_div = 0;

    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum_div += i;
        }
    }

    if (n == sum_div)
    {
        printf("The number %d is perfect ",n);
    }
    else 
    {
        printf("The number %d is not perfect ",n);
    }

    return 0;
}
