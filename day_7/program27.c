//sum of digits using recursive 

#include<stdio.h>

int sum(int x)
{
    while(x<10)
    return x;

    return x%10 + sum(x/10);
}

int main()
{
    int n;
    printf("Enter N : ");
    scanf("%d",&n);

    printf("Sum of digits : %d",sum(n));

    return 0;
}


