#include<stdio.h>
int main()
{
    int q,n,rev=0;
    scanf("%d",&n);
    while(n>0||n<0)
    {
        q=n%10;
        rev=rev*10+q;
        n=n/10;
    }
    printf("%d",rev);
}