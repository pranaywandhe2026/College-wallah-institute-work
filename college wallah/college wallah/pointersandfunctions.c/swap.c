#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    int temp;
    temp=a;
    a=b;
    b=temp;
   printf("%d\n",a);
   printf("%d",b);
   
}
