#include <stdio.h>
//Questão 41
int AnoBissexto (int Ano)
{
    if (Ano%4==0 && Ano%100!=0 || Ano%400==0)return 1;
    return 0;
}
int main ()
{
    int i, R;
    scanf("%d", &i);
    R=AnoBissexto(i);
    if(AnoBissexto(i))
    printf("eh um ano bissexto!\n");
    else
    printf("nao eh um ano bissexto!\n");
    return 0;
}
