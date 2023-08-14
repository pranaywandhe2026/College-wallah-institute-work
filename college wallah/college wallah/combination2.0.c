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
int combination(int n,int r)
{
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main()
{
    int n,r;
    printf("enter the value of n and r");
    scanf("%d%d",&n,&r);
    int ncr=combination(5,2);
    printf("%d",ncr);
    return 0;
}