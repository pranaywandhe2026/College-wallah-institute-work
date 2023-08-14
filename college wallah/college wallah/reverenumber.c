#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int a;
    
    int r=0;
    for(a=1;n!=0;a++)
    {
        r=r+n%10;
        r=r*10;
        n=n/10;
   
    }
    printf("%d",r);
    
}