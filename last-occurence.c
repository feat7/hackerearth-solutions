#include <stdio.h>

int main()
{
    int n, v;
    
    scanf("%d %d", &n, &v);
    int a[n], last=-1;
    
    for(int i=0; i<n; i++) {
    	scanf("%d ", &a[i]);
    	if(a[i]==v) last = i+1;
    }
    printf("%d", last);
    return 0;
}
