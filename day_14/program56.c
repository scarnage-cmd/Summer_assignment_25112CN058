//frequecy of elements

#include<stdio.h>

int main()
{
    int n;
    printf("Enter array size n : ");
    scanf("%d",&n);

    int a[n];

    printf("Enter array elements : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        int count = 1;

        // Count occurrences after i
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }

        // Check if already processed
        int alreadyPrinted = 0;
        for(int k = 0; k < i; k++)
        {
            if(a[i] == a[k])
            {
                alreadyPrinted = 1;
                break;
            }
        }

        if(!alreadyPrinted && count > 1)
        {
            printf("%d occurs %d times\n", a[i], count);
        }
    }

    return 0;
}