#include<stdio.h>

int main()
{

    float phi= 22/7;
    float r;
    float L;

    printf("masukan jari-jari :");
    scanf("%f", &r);
    L=phi*r*r;
    printf("nilai luas :%f", L);
    getch();
    return(0);

}
