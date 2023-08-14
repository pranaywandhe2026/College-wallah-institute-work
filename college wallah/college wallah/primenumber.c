#include<stdio.h>
void main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0){
            printf("not prime number");
            break;
        }
        else{
            printf("prime number");
            break;
        }
        
        
    }
}