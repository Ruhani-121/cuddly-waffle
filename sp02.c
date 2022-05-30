//WAP to input a number. If the number is even, print its square otherwise print its cube.
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d",n*n);
    }
    else
    {
        printf("%d",n*n*n);
    }
    return 0;


}
