//sum using functions 

#include<stdio.h>

//function for summation 
int sum(int x,int y)
{
    int c = x+y;
    return c;
}

//fnc calling 
int main()
{
    int a , b;
    printf("Enter a and b : ");
    scanf("%d %d",&a,&b);

    int s = sum(a,b);
    printf("The sum of %d and %d = %d",a,b,s);

    return 0;
}