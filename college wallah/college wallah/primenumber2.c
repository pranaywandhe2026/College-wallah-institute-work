#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
  int a=1;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            a=2;
            break;
        }
    
        if(a==1)
        {
            printf("prime number");
            break;
        }
        else{
            printf("composite number");
        }
    }
    if(a==2)
    {
        printf("composite number");
    }
}