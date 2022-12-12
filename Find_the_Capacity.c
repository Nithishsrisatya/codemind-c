#include<stdio.h>
int main()
{
    int a[3],i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    int p=1,c,k;
    for(i=0;i<3;i++)
    {
        p=p*a[i];
    }
    c=2*p*512;
    k=c/1024;
    printf("%dKB",k);
}