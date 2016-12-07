float cm2m(float cm);

void main()
{
    float tcm, tm;
    printf("tinggi badan dalam (cm) :");
    scanf("%f", &tcm);
    tm=cm2m(tcm);
    printf("tinggi badan dalam m=%.2f", tm);

}
float cm2m(float cm)
{
    float m;
    m=.01*cm;
    return m;
}
