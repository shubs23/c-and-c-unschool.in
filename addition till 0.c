#include<stdio.h>
int main()
{
    int n=0,sum=0;
    do
    {
        printf("\nEnter a number :" );
        scanf(" %i",&n);
        sum=sum+n;
    }
    while(n!=0);
    printf("\nThe sum of all the entered numbers is : %i",sum);
    return 0;
}
