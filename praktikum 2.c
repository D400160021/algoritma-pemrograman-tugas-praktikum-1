#include<stdio.h>
int main()
{
    int x, y;
    int a, b, c;
    float d;
    printf("masukan nilai x=");
    scanf("%d", & x);
    printf("masukan nilai y=");
    scanf("%d", & y);
    a=x*y;
    b=x+y;
    c=x-y;
    d=x/y;
    printf(" hasil kali =%d\n hasil tambah=%d\n hasil kurang=%d\n hasil bagi =%f\n", a, b, c, d);
}
