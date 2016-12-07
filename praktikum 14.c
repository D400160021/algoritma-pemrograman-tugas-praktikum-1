#include <stdio.h>
int main(void)
{
int bilangan, hasil, i;
printf ("Silahkan masukan bilangan: ");
scanf ("%i",&bilangan);
hasil=1;
for (i=1;i<=bilangan;++i)
{
hasil=hasil*i;
}
printf("\nfaktorial dari %d! adalah %i",bilangan, hasil);
return 0;
}
