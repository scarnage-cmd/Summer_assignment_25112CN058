//sum till n terms 

#include<stdio.h>
int main()
{
    int sum = 0 ;
    int n ;
    int index;
    printf("Enter N : ");
    scanf("%d",&n);

    for(int i =1;i<=n;i++)
    {
        sum += i;
        index =i;
    }

    printf("The sum uptill %d terms: %d",index,sum);

    return 0;
}