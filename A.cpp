#include<stdio.h>
#define mod 1000000007
#define ll long long

ll a,b;

ll power(ll ba, ll ex)
{
    ll res = 1;
    ba %= mod;
    while(ex > 0){
        if(ex % 2 == 1){
            res = (res * ba) % mod;
        }
        ba = (ba * ba) % mod;
        ex /= 2;
    }
    return res;
}

int tinh_mod(ll a){
    return power(a, mod-2);
}

int main()
{
    scanf("%lld %lld", &a, &b);
    
    if(b == 0) {
        printf("1\n");
        return 0;
    }

    if(a == 1) {
        printf("1\n");
        return 0;
    }

    ll res = 1;
    for(ll i=2;i*i<=a;i++){
        if(a % i ==0){
            ll cnt = 0;
            while(a % i == 0){
                cnt++;
                a /= i;
            }
            ll tmp = cnt * b;
            ll tmp1 = (power(i, tmp + 1) - 1 + mod) % mod;
            ll tmp2 = tinh_mod(i - 1);
            res = (res * ((tmp1 * tmp2) % mod)) % mod;
            //printf("%lld\n", res);
        }
    }
    if(a > 1){
        ll tmp = b;
        ll tmp1 = (power(a, tmp + 1) - 1 + mod) % mod;
        ll tmp2 = tinh_mod(a - 1);
        res = (res * ((tmp1 * tmp2) % mod)) % mod;
    }

    printf("%lld", res);
    return 0;
}