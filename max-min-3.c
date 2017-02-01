#include <stdio.h>
#include <stdlib.h>

int intcmp(const void *aa, const void **bb) {
    int *a=aa, *b=bb;
    return (*a < *b) ? -1 : (*a>*b);
}

int main()
{
    int len, y=1;
    scanf("%d", &len);
    int num[len];
    for(int i=0; i<len; i++) {
        scanf("%d ", &num[i]);
    }
    qsort(num, len, sizeof(int), intcmp);
    
    for(int j=0; j<len-1; j++) {
        if(num[j]==(num[j+1]-1) || num[j]==num[j+1]) {
            
            y = 0;
            
        }
        else {
            printf("%s", "NO");
            y=1;
            break;
        }
    }
    
    if(y==0) printf("%s", "YES");
    return 0;
}
