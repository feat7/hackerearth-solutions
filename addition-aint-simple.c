#include <stdio.h>

int main()
{
    int t, len, add;
    scanf("%d\n", &t);
    char str[100000];
    
    for(int i=0; i<t; i++) {
        scanf("%s\n", &str);
        len = strlen(str);
        for(int j=0; j<len; j++) {
            add = (str[j]-97)+(str[len-j-1]-96);
            if(add>=26) add = add-26;
            printf("%c", add+97);
        }
        printf("\n");
    }
    
    return 0;
}
