#include <stdio.h>

int main()
{
    char str[100000];
    scanf("%s", str);
    int len = strlen(str), x, y;
    for(int i=0; i<len; i++) {
        if(str[i]=='L') x--;
        else if(str[i]=='R') x++;
        else if(str[i]=='U') y++;
        else if(str[i]=='D') y--;
    }
    printf("%d %d", x, y);
    return 0;
}
