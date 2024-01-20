#include<stdio.h>
int main()
{
    int i,n,num1=0,num2=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",num1);
        int nextnum=num1+num2;
        num1=num2;
        num2=nextnum;
    }
}