#include<stdio.h>

int main ()
{
    int n[5]={200, 250, 350, 100, 300};
    int i;

    for (i=0; i<5; i++)
    {
        printf("elemen ke-%d = %d\n", i, n[i]);
    }
    return 0;
}
