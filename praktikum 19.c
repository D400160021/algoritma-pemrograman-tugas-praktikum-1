#include<stdio.h>
int maksimum (int x, int y)
{
    if(x>y)
        return(x);
        else
        return(y);
}
void main()
{
    int a,b, hasil;
    printf("masukan 2 bil=\n");
    scanf("%d%d", &a, &b);
    hasil=maksimum(a, b);
    printf("nilai terbesar =%d\n", hasil);
}
