#include<stdio.h>
int main()
{
    int i,n,m,j;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int b,t=0;
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]==b)
            {
                t=1;
                break;
            }
        }
    }
    if(t==1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}