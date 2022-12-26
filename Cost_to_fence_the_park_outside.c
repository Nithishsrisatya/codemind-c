#include<stdio.h>
int main()
{
    int l,b,w,c,nl,nr,tar,A,C;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    A=l*b;
    nl=(2*w)+l;
    nr=b+(2*w);
    tar=(nl*nr)-A;
    C=c*tar;
    printf("%d",C);
}