//table of any given number 

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number you want table of : ");
    scanf("%d",&n);

    int multiple;
    printf("Enter the last multiple you want your table upto :");
    scanf("%d",&multiple);

    int table =1;
    int i;

    printf("The table of %d is as follows :-\n",n);

    for(i=1 ;i<=multiple;i++)
    {
        table = n * i;
        printf("%d * %d = %d \n",n,i,table);
    }

    return 0;
}