#include <stdio.h>

int main()
{
    char str[1000];
    scanf("%s", &str);
    int len=strlen(str);
    int sum=0;
    
    while(len--) {
        sum += ((char) str[len]-96);
    }
    printf("%d", sum);
    return 0;
}