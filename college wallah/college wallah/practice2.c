#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int a=1;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {  
            if(a==1)
            printf("%d ",a);

        }
      
        
      
        printf("\n");
    }
}