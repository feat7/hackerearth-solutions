#include <stdio.h>

int main()
{
    int t, intg, count=0;
    scanf("%d\n", &t);
    
    while(t--) {
        count = 0;
        scanf("%d\n", &intg);
        int arr[intg];
        for(int i=2; i<=intg; i++) {
            for(int j=1; j<i; j++) {
                if((i^j) <= (0^intg)) count++;
            }
        }
        printf("%d\n", count++);
    }
    return 0;
}
