// LCM

#include<stdio.h>
int main()
{
    int a ,b;
    printf("Enter A and B : ");
    scanf("%d %d",&a,&b);

    int gcd = 1;

    for(int i =2;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd =i;
        }
    }

    int lcm = (a*b)/gcd;
    printf("The lcm of given numbers = %d ",lcm);

    return 0;
}