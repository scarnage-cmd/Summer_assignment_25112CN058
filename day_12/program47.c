//fibonacci using fnc
#include<stdio.h>

//fnc for fibonacci 
void fib(int n)
{
    int a = 0;
    int b =1;
    int c;

    for(int i = 1 ;i<=n;i++)
    {
        printf("%d ",a);
        c = a+b;
        a = b;
        b = c;
    }
}

int main()
{
    int m;
    printf("Enter M : ");
    scanf("%d",&m);

    fib(m);

    return 0;
}