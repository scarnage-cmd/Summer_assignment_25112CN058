//reverse using recursive

#include<stdio.h>

int rev_num = 0;

int rev(int a)
{
    if(a == 0)
        return rev_num;

    rev_num = rev_num * 10 + a % 10;

    return rev(a / 10);
}

int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d",&n);

    printf("Reverse : %d",rev(n));

    return 0;
}