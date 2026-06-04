//factorial using fibonacci

#include<stdio.h>

int fact(int x)
{
    if(x==1)
    return 1;

    return x*fact(x-1);
}

int main()
{
    int n;
    printf("Enter N : ");
    scanf("%d",&n);

    printf("Factorial : %d",fact(n));

    return 0;
}