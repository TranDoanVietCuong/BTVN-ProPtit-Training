#include<stdio.h>

long long n;

int main()
{
    scanf("%lld", &n);
    long long k = n;
    while(n % 2 == 0){
        printf("2 ");
        n /= 2;
    } 
    for(long long i=3;i*i<=n;i+=2){
        while(n % i == 0){
            printf("%d ", i);
            n /= i;
        }
    }
    if(n > 1) printf("%lld", n);
    return 0;
}