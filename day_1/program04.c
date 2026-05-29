//number of digits in the entered number 

#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the number : ");
    scanf("%d",&n);

    int count =0;
    int rem ;

    for(int i =0;i<=n;i++)
    {
        rem = n%10;
        count += 1;
        n =n/10;
    }

    printf("The number of digits in the entered number : %d",count);
    return 0;
}