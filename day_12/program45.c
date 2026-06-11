//palidrome using fnc

#include<stdio.h>

//fnc for palindrome
int pal(int n)
{
    int original = n;
    int rev = 0;
    while(n>0)
    {
        int r = n % 10;
        rev = 10*rev + r;
        n = n/10;
    }

    if(rev == original)
    return 1;

    else 
    return 0;
}

int main()
{
    int a;
    printf("Enter A : ");
    scanf("%d",&a);

    if(pal(a))
    {
        printf("The number %d is palidrome ",a);
    }
    else 
    {
        printf("The number %d is not palidrome ",a);
    }

    return 0;
}