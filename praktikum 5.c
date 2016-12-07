#include <stdio.h>
int main ()
{
    /* definisi variable lokal */
    int x = 29;
    /* cek kondisi boolean menggunakan pernyataan if */
    if(x<30)
    {
        /* jika kondisi true, tampilkan bagian berikut */
        printf("x lebih kecil dari pada 30\n");
    }
    printf("nilai x sebenarnya adalah : %d\n",x);
    return 0;
}
