//product of digits 

#include<stdio.h>
int main()
{
    int n;
    printf("Enter N : ");
    scanf("%d",&n);

    int product = 1;
    int remainder;

    while(n>0)
    {
        remainder = n%10;
        product = product * remainder;
        n = n/10;
    }

    printf("The product of digits of the given number = %d",product);

    return 0;
}