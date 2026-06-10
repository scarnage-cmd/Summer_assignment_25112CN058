//sum of digits using recursive 

#include<stdio.h>

int sum(int a)
{
    while(a<10)
    return a;

    return a%10 + sum(a/10);
}

int main()
{
    int n;
    printf("Enter N : ");
    scanf("%d",&n);

    printf("Sum of digits : %d",sum(n));

    return 0;
}


