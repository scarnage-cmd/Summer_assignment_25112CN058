//input and diplay array 

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

    //displaying array 
    printf("Inputed array : ");
    for(int i = 0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}