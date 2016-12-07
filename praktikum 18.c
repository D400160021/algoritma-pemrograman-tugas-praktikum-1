#include<stdio.h>
int minimum (int x, int y)
{
    if(x<y)
        return(x);
        else
        return(y);
}
void main()
{
    int a,b, hasil;
    printf("masukan 2 bil=\n");
    scanf("%d%d", &a, &b);
    hasil=minimum(a, b);
    printf("nilai terkecil =%d\n", hasil);
}
