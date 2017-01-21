#include <stdio.h>

int main()
{
    int m,max=0,max_c=0,r;
    scanf("%d\n", &m);
    
    for(int i=0; i<m; i++) {
        scanf("%d ",&r);
        max += r;
        if(max>max_c) max_c=max;
        if(max<0) max=0;
    }
    printf("%d ", max_c);
    return 0;
}