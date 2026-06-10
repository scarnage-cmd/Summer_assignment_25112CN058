//armstrong number 

#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    int temp = n;
    int count = 0;
    int digit_powsum = 0;

    while(temp > 0)
    {
        temp = temp /10;
        count +=1;
    }

    temp = n;

    while(n>0)
    {
        int remainder = n%10;
        digit_powsum +=  pow(remainder,count);
        n = n/10;
    }

    if(temp== digit_powsum)
    {
        printf("The number %d is armstrong",temp);
    }
    else 
    {
        printf("The number %d is not an armstrong",temp);
    }

    return 0;
}