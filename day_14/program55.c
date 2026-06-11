//porgram to find second largest element 

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

    //main logic to find second max 
    int max = a[0];
    int second_max = -1;

    for(int i = 1;i<n;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }

    for(int i = 1;i<n;i++)
    {
        if(a[i]>second_max && a[i]< max)
        {
            second_max = a[i];
        }
    }

    printf("The second max element = %d ",second_max);

    return 0;
}