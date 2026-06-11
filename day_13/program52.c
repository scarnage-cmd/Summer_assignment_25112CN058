//counting even odd elements of an array 

#include<stdio.h>
int main()
{
    //input array size 
    int n;
    printf("Enter array size n : ");
    scanf("%d",&n);

    //input arrray elements 
    printf("Enter array elements : ");
    int a[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    //main logic 
    int even_sum =0;
    int odd_sum =0;

    for(int i =0 ;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even_sum += 1;
        }
        else
        {
            odd_sum += 1;
        }
    }

    printf("Even sum = %d. \nOdd sum = %d.",even_sum,odd_sum);

    return 0;
}