//strong number 

#include<stdio.h>
int fact(int x)
{
    int mul=1;
    for(int i=1 ;i<=x ;i++)
    {
        mul *= i; 
    }
    return mul;
}

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    int original = n;
    int fact_sum = 0;

    while(n>0)
    {
        int rem = n%10;
        fact_sum  += fact(rem);
        n = n/10;
    }

    if(fact_sum == original)
    {
        printf("The number %d is a strong number",original);
    }
    else 
    {
        printf("The number %d is not a strong number",original);
    }

    return 0;
}