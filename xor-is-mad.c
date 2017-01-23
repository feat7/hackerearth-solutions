#include <stdio.h>

int main()
{
    int t,x,count=0;
    scanf("%d\n", &t);
    
    while(t--) {
        count = 0;
        scanf("%d\n", &x);
        while(x) {
            if((x & 1)==0)
            count++;
            x>>=1;
        }
        printf("%d\n", (1<<count)-1);
    }
    return 0;
}
