#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int a=1;
    int sum=0;
    for(a=1;n!=0;a++)
    {
       int m=n%10;
       if(m%2!=0)
        sum=sum+m;
        n=n/10;
    }
    printf("sum=%d",sum);
}