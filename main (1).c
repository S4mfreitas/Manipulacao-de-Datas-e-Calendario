#include <stdio.h>
//Questão 43
int Gregoriana (int DataJuliana)
{
    long B, N, K, J, Dia, Mes, Ano, data;
    B= DataJuliana + 68569;
    N= (4*B)/146097;
    B= B-((146097*N+3)/4);
    K=(4000*(B+1))/1461001;
    B= B-(1461*K)/4+31;
    J= (80*B)/2447;
    Dia= B-(2447*J)/80;
    B= (J/11);
    Mes= J+2-(12*B);
    Ano= 100*(N-49)+K+B;
    return Ano, Mes, Dia;
}
int main ()
{
    int DataJuliana, R;
    scanf("%d", &DataJuliana);
    R= Gregoriana(DataJuliana);
    printf("%d", R);
    return 0;
}
