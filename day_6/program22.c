//binary to decimal 

#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter binary N : ");
    scanf("%d",&n);

    int deci = 0;
    int digit = 0;

    while(n>0)
    {
        int r = n%10;
        deci += r*pow(2,digit);
        digit += 1;
        n = n/10;
    }

    printf("Binary to decimal conversion :- %d",deci);

    return 0;
}