#include<stdio.h>

int n,m,s,p;

int main()
{
    scanf("%d %d %d %d", &n, &m, &s, &p);
    int hiep = n * (m * 60 + s);
    int nghi = (n - 1) * p;
    int tong = nghi + hiep;
    int phut = tong / 60;
    int giay = tong % 60;

    printf("%d %d", phut, giay);
    return 0;
}