//program to find frequency in array 

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

    //input element whose freq. is to be found
    int s;
    printf("Enter number whose frequecy is to found : ");
    scanf("%d",&s);

    //main logic 
    int freq =0;

    for(int i = 0;i<n;i++)
    {
        if(a[i]==s)
        {
            freq += 1;
        }
    }

    printf("The frequecy of %d is %d",s,freq);

    return 0;
}