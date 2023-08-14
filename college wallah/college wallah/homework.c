#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int sum=0;
    int R=0;
    int r=0;
    while(n>0){
        sum=sum+n%10;
        r=r*10;
        r=r+n%10;
        R=R+r%10;
        n=n/10;
    }
    printf("%d\n",sum);
    printf("%d",R);

    
}