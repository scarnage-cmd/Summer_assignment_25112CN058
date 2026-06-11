//linear search 

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

    //input element to be serached
    int s;
    printf("Enter number to be searched : ");
    scanf("%d",&s);

    //linear search logic 
    int flag =0;
    int index =0;
    for(int i =0;i<n;i++)
    {
        if(a[i]==s)
        {
            flag = 1;
            index = i;
            break;
        }
    }

    if(flag == 1)
    {
        printf(" '%d' is at index %d and pos %d in the given array.",s,index,index +1);
    }
    else 
    {
        printf("Invalid search");
    }

    return 0;
}