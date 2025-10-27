#include<stdio.h>

int n;
int ans = -1;

int main()
{
    scanf("%d", &n);
    for(int i=n/5;i>=0;i--){
        int re = n - 5 * i;
        if(re % 3 == 0){
            ans = i + re / 3;
            break;
        }
    }
    printf("%d", ans);
    return 0;
}