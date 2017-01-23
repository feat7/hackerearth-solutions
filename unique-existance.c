#include <stdio.h>

int main()
{
    int t, N;
    long long unsigned c, digit;
    scanf("%d\n", &t);
    
    while(t--) {
        scanf("%d\n", &N);
        c = 0^0;
        for(int i=0; i<N; i++) {
            scanf("%lld ", &digit);
            if(digit>0)
            c ^= digit;
        }
        if(c==0) printf("-1\n");
        else printf("%lld\n", c);
    }
    return 0;
}
