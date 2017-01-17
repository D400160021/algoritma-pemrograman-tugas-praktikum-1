#include<stdio.h>
int rekeningminimal(int biayakwh)
{
int x;
x=40*biayakwh;
return x;
}

int main()

{
char nama[50],alamat[50],bulan[20];
int Tahun;
printf("Nama:");
gets(nama);
printf("Alamat:");
gets(alamat);
printf("Bulan:");
gets(bulan);
printf("Tahun:");
scanf("%d",&Tahun);
 printf("Batas Daya Yang Tersedia:\n");
 printf("1. 450 VA\n");
 printf("2. 900 VA\n");
 printf("3. 1300 VA\n");
 printf("4. 2200 VA\n");
 int bulanlalu,bulanini,pemakaian,totalbiaya,a,b,c,d,batasdaya,RM;
 printf("masukkan Batas daya (1/2/3/4):");
 scanf("%d",&batasdaya);

if(batasdaya == 1)
{
    int a = 430;
    printf("\nmasukkan nilai meteran bulan lalu:");
    scanf("%d",&bulanlalu);
    printf("masukkan nilai meteran bulan ini:");
    scanf("%d",&bulanini);

    pemakaian=bulanini-bulanlalu;
    printf("daya yang digunakan bulan ini= %d Kwh\n",pemakaian);
    totalbiaya=430*pemakaian;

    RM=rekeningminimal(a);
    if(totalbiaya<RM){
    printf("biaya yang harus dibayar: Rp. %d\n",RM);
    }else{
    printf("biaya yang harus dibayar : Rp. %d\n",totalbiaya);}
}
else if(batasdaya == 2)
{
    int b = 610;
    printf("\nmasukkan nilai meteran bulan lalu:");
    scanf("%d",&bulanlalu);
    printf("masukkan nilai meteran bulan ini:");
    scanf("%d",&bulanini);

    pemakaian=bulanini-bulanlalu;
    printf("daya yang digunakan bulan ini= %d Kwh\n",pemakaian);
    totalbiaya=610*pemakaian;

    RM=rekeningminimal(b);
    if(totalbiaya<RM){
    printf("biaya yang harus dibayar: Rp.%d\n",RM);
    }else{
    printf("biaya yang harus dibayar : Rp.%d\n",totalbiaya);}
}
else if(batasdaya == 3)
{
    int c = 1475;
    printf("\nmasukkan nilai meteran bulan lalu:");
    scanf("%d",&bulanlalu);
    printf("masukkan nilai meteran bulan ini:");
    scanf("%d",&bulanini);


    pemakaian=bulanini-bulanlalu;
    printf("daya yang digunakan bulan ini= %d Kwh\n",pemakaian);
    totalbiaya=1475*pemakaian;

    RM=rekeningminimal(c);
    if(totalbiaya<RM){
    printf("biaya yang harus dibayar: Rp.%d\n",RM);
    }else{
    printf("biaya yang harus dibayar: Rp.%d\n",totalbiaya);}
}
else if(batasdaya == 4)
{
    int d = 1572;
    printf("\nmasukkan nilai meteran bulan lalu:");
    scanf("%d",&bulanlalu);
    printf("masukkan nilai meteran bulan ini:");
    scanf("%d",&bulanini);

    pemakaian=bulanini-bulanlalu;
    printf("daya yang digunakan bulan ini= %d Kwh\n",pemakaian);
    totalbiaya=1572*pemakaian;

    RM=rekeningminimal(d);
    if(totalbiaya<RM){
    printf("biaya yang harus dibayar: Rp.%d\n",RM);
    }else{
    printf("biaya yang harus dibayar : Rp.%d\n",totalbiaya);}
}
else{printf("data yang anda masukkan salah\n");return 0;}
system("cls");
printf("-------------------------------------------------------------------------------------------\n");
printf("---------------------------------PT. PLN solo ------------------------------------------\n");
printf("-------------------------STRUK PEMBAYARAN TAGIHAN LISTRIK----------------------------------\n");
printf("-------------------------------------------------------------------------------------------\n\n");
printf("Nama         : %s\t\t\tBln/Thn:%s %d\n",nama,bulan,Tahun);
printf("Alamat       : %s\n",alamat);
printf("Tarif/Daya   : %d\n",batasdaya);
printf("Daya terpakai:%d\n",pemakaian);
if(totalbiaya<RM){
printf("Rp. Tagihan  : Rp.%d\n\n",RM);
}else{
printf("Rp. Tagihan  : Rp.%d\n\n",totalbiaya);}
printf("(Nb. Tarif/Daya: 1=450 VA, 2=900 VA, 3=1300 VA, 4=2200 VA)\n\n");

printf("------------------------PLN memberlakukan Rekening Minimal----------------------------------\n");
printf("\t\tPLN menyatakan struk ini sebagia bukti pembayaran yang sah\n");
printf("\t\t\t\t Terima kasih\n");
printf("\tRincian tagihan dapat dilihat di www.pln.co.id atau PLN terdekat\n");
printf("\t\t\t     INFORMASI HUB : 123\n ");
printf("******************************************************************************************");

}






