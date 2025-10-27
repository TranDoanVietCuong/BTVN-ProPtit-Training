#include<stdio.h>

int n;

double max(double a, double b){
    if(a >= b) return a;
    return b;
}

int main()
{
    scanf("%d", &n);
    double sum_xs = 0;
    double sum_gioi = 0;
    double sum_kha = 0;
    double sum_tb = 0;
    double sum_yeu = 0;
    int xs = 0;
    for(int i=0;i<n;i++){
        double s = 0, x;
        for(int j=0;j<9;j++){
            scanf("%lf", &x);
            s += x;
        }

        double tb = s / 9.0;
        if(tb >= 9.0){
            xs++;
            sum_xs = max(tb, sum_xs);
        }
        else if(tb>=8.0 && tb<9.0){
            sum_gioi = max(tb, sum_gioi);
        }
        else if(tb>=6.5 && tb<8){
            sum_kha = max(tb, sum_kha);
        }
        else if(tb>=5.0 && tb<6.5){
            sum_tb = max(tb, sum_tb);
        }
        else if(tb<5.0){
            sum_yeu = max(tb, sum_yeu);
        }
    }
    printf("Xuat sac: ");
    if(sum_xs > 0) printf("%.2f\n", sum_xs);
    else printf("-1\n");
    printf("Gioi: ");
    if(sum_gioi > 0) printf("%.2f\n", sum_gioi);
    else printf("-1\n");
    printf("Kha: ");
    if(sum_kha > 0) printf("%.2f\n", sum_kha);
    else printf("-1\n");
    printf("Trung binh: ");
    if(sum_tb > 0) printf("%.2f\n", sum_tb);
    else printf("-1\n");
    printf("Yeu: ");
    if(sum_yeu > 0) printf("%.2f\n", sum_yeu);
    else printf("-1\n");
    printf("So hoc sinh Xuat sac: ");
    printf("%d", xs);
    return 0;
}