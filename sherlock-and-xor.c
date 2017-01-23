#include <stdio.h>

int main()
{
    int t, N;
    scanf("%d\n", &t);
    
    while(t--) {
        scanf("%d\n", &N);
        long long integers[N], even=0, odd=0;
        
        memset(integers, 0, N);
        
        for(int i=0; i<N; i++) {
            scanf("%lld ", &integers[i]);
            if(integers[i]%2==0) even++;
            else odd++;
        }
        
        printf("%lld\n", even*odd);
    }
    return 0;
}
