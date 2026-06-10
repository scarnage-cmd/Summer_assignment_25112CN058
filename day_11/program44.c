//factorial using fnc

#include<stdio.h>

//fnc for factorial 
void fact(int n)
{
    int factorial = 1;
    for(int i = 1 ;i<=n;i++)
    {
        factorial *= i;
    }

    printf("The factorial of %d is %d",n,factorial);
}

//calling the function
int main()
{
    int a;
    printf("Enter A : ");
    scanf("%d",&a);

    fact(a);

    return 0;
}