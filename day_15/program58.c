//shift all elements to left 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d",&n);

    int a[n];
    printf("Enter array elements: ");
    for(int i =0 ;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    //main shifing logic 
    int temp = a[0];

    for(int i =0 ;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]= temp;

    //printing the array after shifting 
    for(int i =0 ;i <n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}