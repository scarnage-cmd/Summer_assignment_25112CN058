//shift all elements to right
#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d",&n);

    int a[n],b[n];
    printf("Enter array elements: ");
    for(int i =0 ;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    //main shifting logic 
    b[0] = a[n-1];

    for(int i = 0; i < n-1; i++)
    {
        b[i+1] = a[i];
    }

    //printing the array after shifting 
    for(int i =0 ;i <n;i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
}