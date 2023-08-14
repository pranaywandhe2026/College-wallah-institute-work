#include<stdio.h>
int factorial(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}
void main()
{
    int n,r;
    printf("enter the value of n and r");
    scanf("%d%d",&n,&r);
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d",ncr);
}