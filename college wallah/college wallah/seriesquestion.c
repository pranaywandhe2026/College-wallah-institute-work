#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int i=1;
    int a; 
    int sum=0;
    while(i<=n)
    {
        if(i%2==0)
       { a=i*(-1);}
        sum= sum+i+a;
        i++;
    }
    printf("%d",sum);
}