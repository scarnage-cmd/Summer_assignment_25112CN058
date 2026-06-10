//prime using fnc 

#include<stdio.h>

//prime fnc
void prime(int n)
{
    int flag = 1;
    if(n <= 1)
    {
        flag = 0;
    }

    for(int i =2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            flag =0;
            break;
        }
    }

    if(flag ==0)
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime ");
    }
}
//fnction calling 
int main()
{
    int a;
    printf("Enter A : ");
    scanf("%d",&a);

    prime(a);

    return 0;
}