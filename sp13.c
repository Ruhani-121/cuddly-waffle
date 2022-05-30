//W.A.P. to accept 3 numbers from user one by one and displays their sum on screen.
#include<stdio.h>
int main()
{
    int a,i,sum=0;
    for(i=1;i<=3;i++)
    {
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("%d",sum);

    return 0;


}
