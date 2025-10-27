#include<stdio.h>

int t;

int main()
{
    scanf("%d", &t);
    while(t--)
    {
        long long a,b;
        scanf("%lld %lld", &a, &b);
        
        if(a >= b){
            printf("%lld\n", a);
        }
        else {
            if(2 * a < b) printf("0\n");
            else {
                long long x = 2 * a - b;
                if(x % 2 == 0) printf("%lld\n",x);
                else printf("%lld\n",x);
            }
        }
    }
    return 0;
}