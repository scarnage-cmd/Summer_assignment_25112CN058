//reverse 

#include<stdio.h>
int main()
{
    int n;
    printf("Enter N : ");
    scanf("%d",&n);

    int temp =n;
    int rev = 0;
    int rem;

    while(n>0)
    {
        rem = n%10;
        rev = rev*10+ rem;
        n = n/10;
    }

    printf("The reverse of %d is %d",temp,rev);

    return 0;

}