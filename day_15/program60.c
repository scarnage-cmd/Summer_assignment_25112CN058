// move all zeros to the end in an array 
#include<stdio.h>

int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int j = 0;

    // Move all non-zero elements to the front
    for(int i = 0; i < n; i++)
    {
        if(a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }

    // Fill the remaining positions with 0
    while(j < n)
    {
        a[j] = 0;
        j++;
    }

    printf("Array after moving zeroes to end:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}