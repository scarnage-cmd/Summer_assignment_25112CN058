//counting bits of a binary number 

#include<stdio.h>
int main()
{
    int n;
    printf("Enter N : ");
    scanf("%d",&n);

    int count = 0;

    while(n>0)
    {
        int r = n%10;
        if(r == 1)
        {
            count += 1;
        }
        n= n/10;
    }

    printf("The number of bits in the given number = %d",count);

    return 0;
}