//maximum using fnc 

#include<stdio.h>

//funtion to find max value 
int max(int a[],int n)
{
    int mx = a[0];
    for(int i =0;i<n;i++)
    {
        if(a[i]>mx)
        {
            mx = a[i];
        }
    }
    return mx;
}

//calling the function 
int main()
{
    int s;
    printf("Enter array size s : ");
    scanf("%d",&s);

    printf("Enter array elements : ");
    int arr[s];
    for(int i = 0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }

    int maximum = max(arr,s);

    printf("The max element is %d ",maximum);

    return 0;
}