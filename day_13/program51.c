//max and min element of array 

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

    //main logic to find max and min element
    int max = a[0];
    int min =a[0];

    for(int i = 0;i<n;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
        if(a[i]<min)
        {
            min = a[i];
        }
    }

    printf("The max elements is %d. \nThe min elements is %d.",max,min);

    return 0;
}