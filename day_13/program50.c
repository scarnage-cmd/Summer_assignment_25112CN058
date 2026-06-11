//avg of array elements

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

    //main avg logic 
    int sum = 0;
    int count = 0;
    int avg = 0;
    for(int i =0 ;i<n;i++)
    {
        sum += a[i];
        count += 1;
        avg = sum / count;    
    }

    printf("The avg of elements of array = %d",avg);

    return 0;
}