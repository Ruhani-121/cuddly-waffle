//W.A.P. to display sum of first ten numbers.
#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("the first ten numbers:");
    for(i=1;i<=10;i++)
    {
        sum=sum+i;
        printf("%d\n",i);
    }
    printf("the sum is:%d\n",sum);
    return 0;
}
