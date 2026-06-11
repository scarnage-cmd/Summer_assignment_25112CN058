//prerfect number using fnc 

#include<stdio.h>

//fnc for perfect number 
int perfect(int n)
{
    int sum_dig = 0;
    for(int i = 1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum_dig +=i;
        }
    }

    if(sum_dig == n)
    return 1;
    else
    return 0;
}

//fnc calling 
int main()
{
    int a;
    printf("Enter A: ");
    scanf("%d",&a);

    if(perfect(a))
    printf("%d is a perfect number.",a);
    else 
    printf("%d is not a perfect number.",a);

    return 0;
}