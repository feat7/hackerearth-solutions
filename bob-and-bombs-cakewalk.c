#include <stdio.h>

int main()
{
    int t, count, len;
    scanf("%d", &t);
    char str[100000];
    
    for(int i=0; i<t; i++) {
        memset(str, 0, 100000);
        scanf("%s\n", &str);
        len = strlen(str);
        count = 0;
        for(int j=0; j<len; j++) {
           if(str[j] == 'B') {
                if(str[j-1]=='W') { str[j-1] = 'C'; count++; }
                if(str[j-2]=='W') { str[j-2] = 'C'; count++; }
                if(str[j+1]=='W') { str[j+1] = 'C'; count++; }
                if(str[j+2]=='W') { str[j+2] = 'C'; count++; }
            } 
        }
        printf("%d\n", count);
    }
    
    return 0;
}