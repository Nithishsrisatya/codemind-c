#include<stdio.h>
int main()
{
    int n,i,m=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c,b;
    scanf("%d%d",&c,&b);
    for(i=0;i<n;i++)
    {
        if(a[i]>c&&a[i]>b||a[i]<c&&a[i]<b)
        {
            printf("%d ",a[i]);
            m=1;
        }
    }
    if(m==0)
    {
        printf("-1");
    }
}