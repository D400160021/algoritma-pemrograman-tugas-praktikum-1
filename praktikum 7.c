#include <stdio.h>
int main ()
{
    /* definisi variabel lokal */
    int x = 300;
    int y = 500;
    /* cek kondisi boolean */
    if(x==300)
    {
        /* jika kondisi true, cek kondisi berikut */
        if(y == 500)
        {
            /* jika kondisi true maka tampilkan berikut */
            printf("Nilai dari x adalah 300 dan y adalah 500\n");
        }
    }
    printf("Nilai sebenarnya dari x adalah : %d\n", x);
    printf("Nilai sebenarnya dari y adalah : %d\n", y);

    return 0;
}
