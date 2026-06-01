//largest prime factor 

#include<stdio.h>
int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d",&n);
    
    int max = 0;

    for(int i = 2 ;i<=n ;i++)
    {
        if(n%i==0)
        {
            int flag = 0;
        
        for(int j = 2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag =1;
                break;
            }
        }

        if(flag ==0)
        {
            max = i;
        }
        }
    }

    printf("The largest prime factor is %d ",max);

    return 0;
}