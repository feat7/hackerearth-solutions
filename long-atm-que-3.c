#include <stdio.h>

int main()
{
    int n, c=1, last=0;
    scanf("%d\n", &n);
    int a[n];
    for(int i=0; i<n; i++) {
        scanf("%d ", &a[i]);
        if(last>a[i]) c++;
        last = a[i];
    }
    printf("%d", c);
    return 0;
}
