#include<stdio.h>
int main()
{
    int q,rev=0,n;
    scanf("%d",&n);
    while(n>0)
    {
        q=n%10;
        rev=rev*10+q;
        n=n/10;
    }
    printf("%d",rev);
}