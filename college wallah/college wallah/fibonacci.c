#include<stdio.h>
void main()


{
    int a,b,c=1;
    printf("enter the value of a and b");
    scanf("%d",&a,&b);
    for(int i=1;i<=b;i++)
    {
        
        c=c*a;
        
        
    }
    printf("%d",c);
}