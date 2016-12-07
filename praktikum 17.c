#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{float kb,kode_barang,harga_beli,total_harga,total_bayar,potongan,hb,potongan1;
char satuan;
char st,nama_barang,nb;
int jumlah_beli,jb;

printf("Masukkan kode barang   :");fflush(stdin);scanf("%f",&kode_barang);
kb=kode_barang;
printf("Masukkan Nama Barang   :");fflush(stdin);scanf("%c",&nama_barang);
nb=nama_barang;
printf("Masukkan Satuan barang :");fflush(stdin);scanf("%c",&satuan);
st=satuan;
printf("Masukkan Jumlah Beli   :");fflush(stdin);scanf("%i",&jumlah_beli);
jb=jumlah_beli;
printf("Masukkan Harga Beli    :");fflush(stdin);scanf("%f",&harga_beli);
hb=harga_beli;

printf("--------------------------------------\n");
printf("MINI MARKET SERBA ADA\n");
printf("--------------------------------------\n");
printf("Kode Barang    :%-10.2f\n",kb);
printf("Nama Barang    :%-10c\n",nb);
printf("Satuan         :%-5c\n",st);
printf("Jumlah Beli    :%-10.2i\n",jb);
printf("Harga Beli     :%-10.2f\n",hb);
printf("--------------------------------------\n");
total_harga=jb*hb;
printf("Total Harga    :%-10.2f\n",total_harga);
if (total_harga > 100000)
{
potongan=total_harga*0.1;
printf("Potongan       :%f\n",potongan);
}
else
if (total_harga <100000)
{
potongan1=total_harga*0;
printf("potongan       :%f\n",potongan1);
}
return(0);
}
