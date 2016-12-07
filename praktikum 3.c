#include<stdio.h>
int main ()
{
float phi = 22/7;
float jari, luas;
printf("Masukan Jari-Jari Lingkaran :");
scanf("%f", &jari);

luas= phi*jari*jari;
printf("Luas: %f", &luas);

getch();
return 0;
}
