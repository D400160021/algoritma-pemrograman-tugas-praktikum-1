#include <stdio.h>
int main ()
{
    /* definisi variabel lokal */
    int x = 100;
    /* cek kondisi boolean */
    if (x<20)
    {
        /* jika kondisi true maka tampilan berikut */
        printf("x lebih kecil dari 20\n");
    }
    else
    {
        /* jika kondisi false maka tampilan berikut */
        printf("x tidak lebih kecil dari 20\n");
    }
    printf ("nilai x adalah : %d\n", x);
    return 0;
}
