//nth term of fibonacci series 

#include<stdio.h>
int main()
{
    int n;
    printf("Enter N : ");
    scanf("%d",&n);
    
    int a[n];

    a[0] = 0;
    a[1]= 1;

    for(int i =2;i<n;i++)
    {
        a[i]= a[i-1] + a[i-2];
    }

    printf("Nth term of fibonnacci series = %d ",a[n-1]);

    return 0;
}