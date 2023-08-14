#include<stdio.h>
void main()
{
    int a,n;
    printf("enter numbers");
    scanf("%d",&n);
    
    a=n;
    
    for(int i=1;i<=n;i++)
    {
    for(int j=1;j<=a;j++)
    {
        printf("* ");

    }

    a--;

    printf("\n");
}
    
}