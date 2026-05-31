//factors 

#include<stdio.h>
int main()
{
    int n;
    printf("Enter N :");
    scanf("%d",&n);

    printf("The factors of the given number are : \n");

    for(int i =1; i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }  
    }

    return 0;
}