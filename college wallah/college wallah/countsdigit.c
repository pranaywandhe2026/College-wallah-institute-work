#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int count;
    for( count=0;n!=0;count++)
    {
        n=n/10;
    
    
    }
    printf("digits are=%d\n",count);
    }
    