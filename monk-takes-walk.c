#include <stdio.h>
#include <ctype.h>

int main()
{
    int t, count, len;
    scanf("%d", &t);
    char str[100000];
    
    for(int i=0; i<t; i++) {
       scanf("%s\n", &str);
       len = strlen(str);
       count = 0;
       for(int j=0; j<len; j++) {
           str[j] = tolower(str[j]);
            if(str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u') {
            count++;
            }
       }
       
       printf("%d\n", count);
    }
    return 0;
}