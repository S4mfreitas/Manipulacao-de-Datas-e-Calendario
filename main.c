#include <stdio.h>
// Questão 42 e 43
int Juliana (int Dia, int Mes, int Ano)
{
    int Data;
    Data=((1461*(Ano+4800+(Mes-14)/12))/4+(367*(Mes-2-12*((Mes-14)/12)))/12-(3*((Ano+4900+(Mes-14)/12)/100))/4+Dia-32075);
    return Data;
}
int DiaDaSemana (int Dia, int Mes, int Ano)
{
    int Data;
    Data=(Juliana(Dia, Mes, Ano));
    return Data%7;

}
int main ()
{
    int Dia, Mes, Ano, J, D;
    scanf("%d %d %d", &Dia, &Mes, &Ano);
    J=Juliana(Dia, Mes, Ano);
    printf("A data em juliana eh: %d\n", J);
    D=DiaDaSemana(Dia, Mes, Ano);
    switch (D)
    {
    case 0:
        printf("Dia da semana correspondente: Segunda-Feira\n");
        break;
    case 1:
        printf("Dia da semana correspondente: Terca-Feira\n");
        break;
    case 2:
        printf("Dia da semana correspondente: Quarta-Feira\n");
        break;
    case 3:
        printf("Dia da semana correspondente: Quinta-Feira\n");
        break;
    case 4:
        printf("Dia da semana correspondente: Sexta-Feira\n");
        break;
    case 5:
        printf("Dia da semana correspondente: Sabado\n");
        break;
    case 6:
        printf("Dia da semana correspondente: Domingo\n");
        break;
    }
    return 0;
}
