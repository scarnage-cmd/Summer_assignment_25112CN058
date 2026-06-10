//recursive fibonacci 

#include<stdio.h>

int fib(int a)
{
    if(a==0)
    return 0;
 
    if(a==1)
    return 1;

    return fib(a-1) + fib(a-2);
}

int main()
{
    int n;
    printf("Enter N : ");
    scanf("%d",&n);

    printf("Fibonacci series : ");
    for(int i =0;i<n;i++)
    {
        printf("%d ",fib(i));
    }

    return 0;
}
