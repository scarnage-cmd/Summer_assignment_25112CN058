// Armstrong number series

#include<stdio.h>
#include<math.h>

int main()
{
    int n;

    printf("Enter N : ");
    scanf("%d",&n);

    printf("Armstrong numbers are : \n");

    for(int i = 1; i <= n; i++)
    {
        int temp = i;
        int original = i;

        int count = 0;
        int sum = 0;

        // count digits
        while(temp > 0)
        {
            count++;
            temp = temp / 10;
        }

        temp = i;

        // calculate power sum
        while(temp > 0)
        {
            int digit = temp % 10;
            sum += pow(digit, count);
            temp = temp / 10;
        }

        // check armstrong
        if(sum == original)
        {
            printf("%d ", original);
        }
    }

    return 0;
}