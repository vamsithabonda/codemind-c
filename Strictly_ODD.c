#include<stdio.h>
int main()
{
    int i,n,t=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==1)
        {
            if(i%2==1)
            {
                t=1;
            }
            else
            {
                t=0;
            }
        }
    }
    if(t==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}