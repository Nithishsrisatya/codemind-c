#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,M,s,i;
    scanf("%d%d%d",&x,&y,&M);
    if(1<=x<=20&&1<=y<=100&&2<=M<=100)
    {
        s=pow(x,y);
        i=s%M;
        printf("%d",i);
    }
}