//reverse using recursive

#include<stdio.h>

int reverse_num = 0;

int rev(int x)
{
    if(x == 0)
        return reverse_num;

    reverse_num = reverse_num * 10 + x % 10;

    return rev(x / 10);
}

int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d",&n);

    printf("Reverse : %d",rev(n));

    return 0;
}