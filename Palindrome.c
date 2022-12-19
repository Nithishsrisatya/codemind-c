#include<stdio.h>
int main()
{
    int n,rev=0,rem,q;
    scanf("%d",&n);
    q=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==q)
    printf("True");
    else
    printf("False");
}