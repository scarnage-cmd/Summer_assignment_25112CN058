//armstong number using fnc 

#include<stdio.h>
#include<math.h>

//fnc for armstrong
int arm(int n)
{
    int original = n ;
    int original2 = n;
    int count =0;
    while(n>0)
    {
        int r = n%10;
        count += 1;
        n = n/10;
    }

    int armstrong = 0;
    while(original >0)
    {
        int r = original % 10;
        armstrong += pow(r,count);
        original = original /10;
    }
    
    if(original2 == armstrong)
    return 1;
    else
    return 0;
}

//calling the fnc
int main()
{
    int a ;
    printf("Enter A : ");
    scanf("%d",&a);

    if(arm(a))
    printf("%d is armstong",a);
    else
    printf("%d is not armstong",a);
    return 0;
}