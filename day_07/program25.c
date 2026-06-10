//factorial using recursion

#include<stdio.h>

int fact(int a)
{
    if(a==1)
    return 1;

    return a*fact(a-1);
}

int main()
{
    int n;
    printf("Enter N : ");
    scanf("%d",&n);

    printf("Factorial : %d",fact(n));

    return 0;
}