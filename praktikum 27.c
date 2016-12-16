#include<stdio.h>
main()
{
int i,j,hasil12[2][2];
int matriksA[2][2];
int matriksB[2][2];
int hasil1[2][2];

printf("matriks A\n");
for(i=0; i< 2; i++)
{
    for(j=0; j<2; j++)
    {
        printf("elemen [%d][%d]:", i, j);
        scanf("%d", &matriksA [i] [j]);
    }
}
printf("matriksB\n");
for(i=0;i<2;i++)
{
    for(j=0; j<2; j++)
    {
        printf("elemen [%d][%d]:", i, j);
        scanf("%d", &matriksB [i] [j]);
    }
}

printf("pengurangan matriks\n");
for (i= 0; i<2; i++)
{
    for (j=0; j<2; j++)
    {
        hasil1 [i][j] = matriksA [i][j] - matriksB [i][j];
        printf("%d\t", hasil1 [i][j]);
    }
    printf("\n");
}
}
