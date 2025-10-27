#include<stdio.h>
#include<math.h>

long long n;

int main()
{
    scanf("%lld", &n);
    long long ans = floor(log10(n)) + 1;
    printf("%lld", ans);
    return 0;
}