//palindrome

#include<stdio.h>
int main()
{
    int n;
    printf("Enter N : ");
    scanf("%d",&n);

    int temp = n;
    int rev=0;

    while(n>0)
    {
        int rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }

    if(rev == temp)
    {
        printf("The given number is palidrome : %d ",temp);
    }
    else
    {
        printf("The number is not palidrome ");
    }

    return 0;
    
}