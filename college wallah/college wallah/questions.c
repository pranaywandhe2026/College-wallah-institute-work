#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int a=0;
    while(n!=0)
    {
        n=n/10;
        a++;
    }
    printf("%d",a);
    
    

}