#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m][n];
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum;
    for(j=0;j<n;j++)
    {
        sum=0;
        for(i=0;i<m;i++)
        {
            sum=sum+a[i][j];
        }
        printf("%d ",sum);
    }
}