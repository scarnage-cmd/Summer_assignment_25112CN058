//sum of digits 

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    int sum =0;

    while(n>0)
    {
        int rem = n%10;
        sum += rem;
        n = n/10;
    }

    printf("The sum of digits of the entered number = %d",sum);

    return 0;
}