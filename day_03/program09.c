//prime 

#include<stdio.h>
int main()
{
    int n;
    printf("Enter N : ");
    scanf("%d",&n);

    int flag = 0;

    if(n == 0 || n == 1)
    {
        printf("Number is not prime");
        return 0;
    }

    for(int i=2; i*i<=n;i++)
    {
        if(n%i==0)
        {
            flag =1;
            break;
        }
    }

    if(flag ==1)
    {
        printf("The given number %d is not prime ",n);
    }
    else 
    {
        printf("The given number %d is prime",n);
    }

    return 0;
}